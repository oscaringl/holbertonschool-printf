<div>
<div data-react-class="projects/ProjectHeader" data-react-props="{&quot;metadata&quot;:{&quot;level&quot;:&quot;Master&quot;,&quot;author&quot;:&quot;Julien Barbier, co-founder \u0026 CEO&quot;,&quot;weight&quot;:5,&quot;task_level_review_type&quot;:&quot;Your score will be updated once you launch the project review.&quot;,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_manual_correction&quot;:true},&quot;team&quot;:{&quot;in_team_of&quot;:2}},&quot;project&quot;:{&quot;completion&quot;:0.0,&quot;id&quot;:2167,&quot;index&quot;:0,&quot;isAccessible&quot;:true,&quot;isOptional&quot;:false,&quot;imagePath&quot;:&quot;/assets/pathway/004_color-d2fbcfb42ba7481834896ecc89a6f0ae65762b3c1096691dd0f820f7f29e3389.png&quot;,&quot;name&quot;:&quot;C - printf&quot;,&quot;score&quot;:{&quot;mandatory&quot;:0.0,&quot;optional&quot;:0.0},&quot;tasksCount&quot;:14},&quot;slackLink&quot;:null,&quot;tags&quot;:[],&quot;videoRoomLink&quot;:null}" data-react-cache-id="projects/ProjectHeader-0">
<div>
<div>
<div>
<h1>C - printf</h1>
</div>
</div>
</div>
</div>
</div>
<div>
<div>
<h3>Concepts</h3>
</div>
<div>
<p><em>For this project, we expect you to look at these concepts:</em></p>
<ul>
<li><a href="https://intranet.hbtn.io/concepts/881">Approaching a Project</a></li>
<li><a href="https://intranet.hbtn.io/concepts/893">Group Projects</a></li>
<li><a href="https://intranet.hbtn.io/concepts/894">Pair Programming - How To</a></li>
<li><a href="https://intranet.hbtn.io/concepts/895">Flowcharts</a></li>
</ul>
</div>
</div>
<div>
<div>
<h2>Background Context</h2>
<p>Write your own <code>printf</code> function.</p>
<p><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/228/printf.png" /></p>
<p><em>^ In this picture, <a title="Kris" href="https://intranet.hbtn.io/rltoken/9w8GUXXNHI-_Pb5kqdsQEQ" target="_blank" rel="noopener">Kris</a>, and <a title="Jul" href="https://intranet.hbtn.io/rltoken/QUvlq7E1jttx-t1TCckfHQ" target="_blank" rel="noopener">Jul</a></em></p>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Secrets of printf" href="https://intranet.hbtn.io/rltoken/xVFYmqhB09g6odagWE5n_w" target="_blank" rel="noopener">Secrets of printf</a></li>
<li><strong>Group Projects</strong> concept page (<em>Don&rsquo;t forget to read this</em>)</li>
<li><strong>Flowcharts</strong> concept page</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>printf (3)</code></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code>files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>main.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the <code>_putchar</code> function for this project</li>
</ul>
<h3>GitHub</h3>
<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>
<h2>More Info</h2>
<h3>Authorized functions and macros</h3>
<ul>
<li><code>write</code> (<code>man 2 write</code>)</li>
<li><code>malloc</code> (<code>man 3 malloc</code>)</li>
<li><code>free</code> (<code>man 3 free</code>)</li>
<li><code>va_start</code> (<code>man 3 va_start</code>)</li>
<li><code>va_end</code> (<code>man 3 va_end</code>)</li>
<li><code>va_copy</code> (<code>man 3 va_copy</code>)</li>
<li><code>va_arg</code> (<code>man 3 va_arg</code>)</li>
</ul>
<h3>Compilation</h3>
<ul>
<li>Your code will be compiled this way:</li>
</ul>
<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
</code></pre>
<ul>
<li>As a consequence, be careful not to push any c file containing a <code>main</code> function in the root directory of your project (you could have a <code>test</code> folder containing all your tests files including <code>main</code> functions)</li>
<li>Our main files will include your main header file (<code>main.h</code>): <code>#include main.h</code></li>
<li>You might want to look at the gcc flag <code>-Wno-format</code> when testing with your <code>_printf</code> and the standard <code>printf</code>. Example of test file that you could use:</li>
</ul>
<pre><code>alex@ubuntu:~/c/printf$ cat main.c
#include &lt;limits.h&gt;
#include &lt;stdio.h&gt;
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
 int len;
 int len2;
 unsigned int ui;
 void *addr;
 len = _printf("Let's try to printf a simple sentence.\n");
 len2 = printf("Let's try to printf a simple sentence.\n");
 ui = (unsigned int)INT_MAX + 1024;
 addr = (void *)0x7ffe637541f0;
 _printf("Length:[%d, %i]\n", len, len);
 printf("Length:[%d, %i]\n", len2, len2);
 _printf("Negative:[%d]\n", -762534);
 printf("Negative:[%d]\n", -762534);
 _printf("Unsigned:[%u]\n", ui);
 printf("Unsigned:[%u]\n", ui);
 _printf("Unsigned octal:[%o]\n", ui);
 printf("Unsigned octal:[%o]\n", ui);
 _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
 printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
 _printf("Character:[%c]\n", 'H');
 printf("Character:[%c]\n", 'H');
 _printf("String:[%s]\n", "I am a string !");
 printf("String:[%s]\n", "I am a string !");
 _printf("Address:[%p]\n", addr);
 printf("Address:[%p]\n", addr);
 len = _printf("Percent:[%%]\n");
 len2 = printf("Percent:[%%]\n");
 _printf("Len:[%d]\n", len);
 printf("Len:[%d]\n", len2);
 _printf("Unknown:[%r]\n");
 printf("Unknown:[%r]\n");
 return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
</code></pre>
<ul>
<li>We strongly encourage you to work all together on a set of tests</li>
<li>If the task does not specify what to do with an edge case, do the same as <code>printf</code></li>
</ul>
</div>
</div>
<h2>Tasks</h2>
<div data-role="task20025" data-position="1">
<div>
<div>
<h3>0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life</h3>
<div>mandatory</div>
</div>
<div>
<p>Write a function that produces output according to a format.</p>
<ul>
<li>Prototype: <code>int _printf(const char *format, ...);</code></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li><code>format</code> is a character string. The format string is composed of zero or more directives. See <code>man 3 printf</code> for more detail. You need to handle the following conversion specifiers:
<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul>
</li>
<li>You don&rsquo;t have to reproduce the buffer handling of the C library <code>printf</code> function</li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-printf</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20040" data-position="2">
<div>
<div>
<h3>1. Education is when you read the fine print. Experience is what you get if you don't</h3>
<div>mandatory</div>
</div>
<div>
<p>Handle the following conversion specifiers:</p>
<ul>
<li><code>d</code></li>
<li><code>i</code></li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-printf</code></li>
</ul>
</div>
</div>
<div>
<div>
</div>
</div>
</div>
</div>
<div data-role="task20026" data-position="3">
<div>
<div>
<h3>2. Just because it's in print doesn't mean it's the gospel</h3>
<div>mandatory</div>
</div>
<div>
<p>Create a man page for your function.</p>
</div>
<div>
<div>
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository: <code>holbertonschool-printf</code></li>
<li>File: <code>man_3_printf</code></li>
</ul>
</div>
</div>
</div>
</div>