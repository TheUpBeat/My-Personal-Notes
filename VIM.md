# Looking into VIM/NEOVIM and its craziness.

* Move        

    - `k` -> moves up
    - `h` -> moves left
    - `l` -> moves right
    - `j` -> moves down
    - `w` -> move to the next word (starting letter)
    - `numberw` -> `3w` (or) `10w` -> moves to the starting of the word after the specific number of words
    - `b` -> move to the previous word (starting letter)
    - `numberb` -> `4b` (or) `11b` -> moves backward to the start of the word after the specified number of words
    - `e` -> move to the next word (ending letter)
    - `numbere` -> `6e` (or) `9e` -> moves to the end of the word after the specified number of words
    - `Shift + { / }` -> move up or down to the beginning of the paragraph
    - `^` (or) `0` -> moves to the beginning of the line
    - `$` -> moves to the end of the line


* Save
    - `:w` -> write
    - `:wq` -> write and quit
    - `:x` -> write and exit
    - `Shift + Z + Z` -> write and quit


* Quit
    - `:q` - quit
    - `:q!` - quit forcefully
    - `Shift + Z + Q` -> quit without saving


* Write
    - `i` -> insert mode (lets you write before the character pointed)
    - `a` -> append mode (lets you write after the character pointed)
    - `Shift + A` -> append mode (moves the cursor to end and lets you write)
    - `Shift + I` -> insert mode (moves the cursor to start of the line and lets you write)
    - `o` -> moves to a new paragraph and gets into insert mode
    - `Shift + O` -> adds an other paragraph above the current and gets into insert mode


* Delete/Remove
    - `x` -> deletes a highlighted character
    - `numberx` -> `4x` (or) `14x` -> deletes the specified number of characters from the cursors position
    - `dw` -> deletes the highlighted word (until the start of the word)
    - `dnumberw` -> `d5w` (or) `d18w` -> deletes the specified number of the words from the cursor position
    - `db` -> deletes the previous to the highlighted word (until the start of the word)
    - `dnumberb` -> `d4b` (or) `d11b` -> deletes the specified number of word backwards from the cursor position
    - `de` -> deletes the highlighted word (until the end of the word)
    - `dnumbere` -> `d4e` (or) `d15e` -> deletes the specified number of words from the cursors positions (until the end of the word)
    - `dd` -> deletes the highlighted sentence
    - `dnumberd` -> `d5d` -> deletes the specified number of lines from the cursors position
    - `d$` (or) `Shift + D` -> deletes the sentence (or) words from the position of the cursor till the end
    - `d{ / }` -> deletes the paragraph above or below the cursor position
    - `dnumber{ / }` -> `d4{` (or) `d7}` -> deletes the number of paragraphs above or below the cursor position
    - `daw` -> deletes the complete word/character (includes space)
    - `diw` -> deletes the complete word/character (excludes space)
    - `dap` -> deletes the complete paragraph (includes spaces)
    - `numberdap` -> `5dap` (or) `10dap` -> deletes the specified number of paragraphs completely (includes space)
    - `dip` -> same as `dap` without spaces
    - `numberdip` -> `5dip` (or) `10dip` -> same as `numberdap` without spaces
    - `di( / )` -> deletes everything in the parentheses
    - `da( / )` -> deletes everything in the parentheses including the parentheses


* Undo/Redo
    - `u` -> undo (the last command)
    - `Shift + U` -> undoes the whole line
    - `Ctrl + r` -> redo
    - `:earlier time` -> `earlier 5m` (or) `earlier 10m` -> undoes everything to the time mentioned. Like `5m` will undo everything to 5min ago
    - `later time` -> `later 5m` (or) `later 15m` -> opposite to earlier. Redoes everything to the time mentioned


* Copy/Paste/Edit
    - `p` -> puts the text (paste)
    - `dd` and `p` -> cuts the line and puts it in the specified location (it does not copy the clipboard)
    - `rletter` -> `re` (or) `rx` -> when pressed `r` any letter followed will replace the highlighted position
    - `c` -> is just like `d` + `i`. It deletes as per the instruction and gets into insert mode. Like `cwline` deletes the highlighted word and replaces it with the word `line`
    - `:s/toreplace/replace` -> `:s/teh/the` -> substitutes the word that are `teh` to `the` (only one instance)
    - `:s/toreplace/replace/g` -> `:s/teh/the/g` -> replaces all the instances of the word `teh` to `the`
    - `yfunction` -> `yap` -> yanks the whole paragraph -> lets you copy the whole paragraph


* Cursor Location
    - `Ctrl + g` -> shows your location and file status
    - `number%` -> `25%` (or) `11%` -> moves the cursors to location of the file as per the percent
    - `Shift + G` -> moves cursor to bottom of the page
    - `gg` -> moves the cursor to the top of the page
    - `%` -> moves the cursor to point the other end of parentheses
    - `''` -> will move the cursor the previous location


* Search
    - `/` -> search the word
    - `n` -> to move to the next instance
    - `Shift + N` -> to move to the previous instance


* Commands
    - `:sort` -> sorts all the text selected
    - `:set spell` -> enables spell checker
    - `:!` -> `:!ls` (or) `:!cd` -> runs the external command
    - `.` -> it repeats the last command as it is
    - `:norm command` -> applies the command to all the selected
    - `z=` -> if the word is misspelled this lets you search the dictionary
    - `]s`-> moves to other misspelled word
    - `:set ic` -> ignores case-sensitive
    - `:help` -> `:help command` -> shows up the help


* Visualize
    - `v` -> lets you select the text
    - `vfunction` -> `vap` -> can do all the functions same as `dap` (or) `cap`
    - `Shift + V` -> selects everything in the line
    - `Ctrl + v` -> lets you selects everything block sized
