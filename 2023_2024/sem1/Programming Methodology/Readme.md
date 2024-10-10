## About this subject
* In first year, semester 1, we will learn subject Programming methodology. 
* It queit easy for anyone who known a little bit of C/C++.  
* To get more details about this subject, find the syllabus in this repositories.
* I will upload some books, documents i had read and excerise, homework i had done, also my Example sollution to these problems.
* I use Sublime Text 4 to write and edit my code becasue the VS code is to complicated, also this is a paying IDE but for me the free version is enough. 
* And i will guide every one to install it below:
  
## Book and Bibliography
* H. H. Tan, [2012], C Programming: a Q & A Approach, McGraw-Hill, New York.
* 2022_Paul, Deitel Harvey - C How to Program-Pearson Education
  
## Installation guide of Sublime Text                   
* Step 1: Download Sublime Text 4 here: https://www.sublimetext.com/3 . Choose the approriate version with your computer's system                                                                                     
* Step 2: Open ST4, look at the menu bar (on the top) -> [Tools]  -> [Build system] -> [New Build system]                                                                                                              
* Step 3: Copy the code below and save as "myC.sublime-build"
  
	    {
	        "encoding": "utf-8",
	        "working_dir": "$file_path",
	        "shell_cmd": "gcc -Wall -std=c++11 \"${file}\" -o \"${file_path}/${file_base_name}\"",
	        "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
	        "selector": "source.c",
	    
	        "variants":
	        [
	            {   
	                "name": "Run",
	                "shell_cmd": "gcc -Wall -std=c89 \"${file}\" -o \"${file_base_name}\" && start cmd /c \"\"${file_path}/${file_base_name}\" & echo. &echo ------------------------------ & echo Quang Huy Handsome had successfully compiled from LTP's compiler & pause\""
	            }
	        ]
	    }
        
* Step 4: Write some program and save it with extension .py (like: Hello_World.py)
* Step 5: [Tools]  -> [Build system] -> [New Build system] -> [myC] -> [myPython - Run]                                                                                                                                     
* Step 5: In the first time using ST4, Press [Ctrl] + [Shift] + [B] at the same time. Next time just press [Ctrl] + [B]
* Step 6: How to crack ST4. Read this: https://gist.github.com/skoqaq/3f3e8f28e23c881143cef9cf49d821ff#gistcomment-4824279
  * Thanks to @skoaq because of his idea. 
  
## Contact:
* Nguyen Quang Huy 
* Email: quanghuy71847@gmail.com
* Instagram: daddy_chill_dop
  
## Thanks for reading and enjoy your 4 years journey at TDTU
