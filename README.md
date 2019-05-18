# diff
diff basic commands

diff [options] file1 file2
options to support:

diff -v aka --version                  (prints version, license, and author (you))

diff -q aka --brief                    (reports only whether files are different
                                            shows nothing if files are identical)
                                            
diff -i aka --ignore-case              (ignores upper/lower case differences)

diff -s aka --report-identical-files   (reports if files are the same)
                                            shows default output if files are different
                                            

diff file1 file2  aka --normal       (default behavior)

diff -y aka --side-by-side           (side by side format && prints common lines)

diff --left-column                   (..., prints only the left column of common lines)

diff --suppress-common-lines ...     (side-by-side but doesn't show common lines)

diff -c NUM aka --context=NUM        (shows NUM default 3 lines of copied context)

diff -u NUM aka --unified=NUM        (shows NUM default 3 lines of unified context)
