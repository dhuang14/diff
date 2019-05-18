# diff
diff basic commands\n
diff [options] file1 file2\n
options to support:\n\n

diff -v aka --version                  (prints version, license, and author (you))\n
diff -q aka --brief                    (reports only whether files are different\n
                                            shows nothing if files are identical)\n
diff -i aka --ignore-case              (ignores upper/lower case differences)\n
diff -s aka --report-identical-files   (reports if files are the same)\n
                                            shows default output if files are different\n\n

diff file1 file2  aka --normal       (default behavior)\n
diff -y aka --side-by-side           (side by side format && prints common lines)\n
diff --left-column                   (..., prints only the left column of common lines)\n
diff --suppress-common-lines ...     (side-by-side but doesn't show common lines)\n
diff -c NUM aka --context=NUM        (shows NUM default 3 lines of copied context)\n
diff -u NUM aka --unified=NUM        (shows NUM default 3 lines of unified context)\n
