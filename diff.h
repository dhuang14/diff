//
//  diff.h
//  input
//
//  Created by David Huang on 5/18/19.
//  Copyright © 2019 David Huang. All rights reserved.
//

#ifndef diff_h
#define diff_h
typedef struct para para;

para* para_make(char* base[], int size, int start, int stop);
para* para_first(char* base[], int size);
para* para_next(para* p);
size_t para_filesize(para* p);
size_t para_size(para* p);
char** para_base(para* p);
char* para_info(para* p);
int   para_equal(para* p, para* q);
void para_print(para* p, void (*fp)(const char*));

#endif /* diff_h */
