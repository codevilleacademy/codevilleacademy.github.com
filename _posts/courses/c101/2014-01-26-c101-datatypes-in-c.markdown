---
layout: course_page
title: "Variables and Datatypes"
category: c101
---
<h2 id="page" class="clay">{{page.title}}</h2>
<hr class="large orange" />

<ul id="agenda"></ul>

<h3 id="variables">Variables</h3>
<hr class="large orange" />
<p><span class="italic bold orange">Variables</span> are the basic data objects that are changed continuously during the program execution. Thus we infer that the variable is an entity in C language that are used to store and retrieve some values that we may require during our program execution.<p>
<p>Every variable is identified by its variable name. This variable name are bounded by some rule, this implies, that you can give your variables any name unless they break the variable naming convention.</p>

<br/>
<p class="italic bold dark-red">Variable Naming conventions:</p>
<ol class="list">
	<li>Variable names are made up of letters, digits and underscore ('_')</li>
	<li>The first character of the variable name should be a letter or an underscore ('_')</li>
	<li>Following letters can be anything and any combination of letters, digits and underscore ('_')</li>
	<li>Variable names should not be one of the keywords of C, because they are reserved for specific purpose in C.</li>
</ol>
<div class="arial note purple">
	<p class="text-center"><span class="black bold">List of C keywords</span></p>
	<table class="table black">
		<tr>
			<td>auto</td>
			<td>double</td>
			<td>int</td>
			<td>struct</td>
		</tr>
		<tr>
			<td>break</td>
			<td>else</td>
			<td>long</td>
			<td>switch</td>
		</tr>
		<tr>
			<td>case</td>
			<td>enum</td>
			<td>register</td>
			<td>typedef</td>
		</tr>
		<tr>
			<td>char</td>
			<td>extern</td>
			<td>return</td>
			<td>union</td>
		</tr>
		<tr>
			<td>const</td>
			<td>float</td>
			<td>short</td>
			<td>unsigned</td>
		</tr>
		<tr>
			<td>continue</td>
			<td>for</td>
			<td>signed</td>
			<td>void</td>
		</tr>
		<tr>
			<td>default</td>
			<td>goto</td>
			<td>sizeof</td>
			<td>volatile</td>
		</tr>
		<tr>
			<td>do</td>
			<td>if</td>
			<td>static</td>
			<td>while</td>
		</tr>
	</table>
</div><br/>

<div class="tip green-blue">
	<ol class="list">
	<li>To improve readability of your program, the variable names should be meaningful, specific to purpose and preferably long.</li>
	<li>Variables are case sensitive, that is, Upper case and Lower case letters are distinct. Hence 'V' and 'v' are two different names.</li>
	<li>Tradition C practice is to use lower case for variable names.</li>
</div>

<br/>
<h3 id="data-types">Data Types and Sizes</h3>
<hr class="large orange" />
<p><span class="italic bold orange">Data Type</span> in simple terms is "type of the data". Data type of a variable tells whit type of data will be stored in the variable.</p>
<p>There are only few data types in C, these are</p>
<table class="table black">
	<thead>
		<td>Data Type</td>
		<td>Size</td>
		<td>Description</td>
	</thead>
	<tr>
		<td>char</td>
		<td>1 Byte</td>
		<td>Holds one character in it</td>
	</tr>
	<tr>
		<td>int</td>
		<td>Compiler Dependent</td>
		<td>Holds one integer in it</td>
	</tr>
	<tr>
		<td>float</td>
		<td>4 Bytes</td>
		<td>Holds one single-precision floating point decimal number in it</td>
	</tr>
	<tr>
		<td>double</td>
		<td>8 Bytes</td>
		<td>Holds one double-precision floating point decimal number in it</td>
	</tr>
</table>

<br/>
<h3 id="constants">Constants</h3>
<hr class="large orange" />
<p><span class="italic bold orange">Constants</span> are data objects that contains a constant value of a particular type. There are some specific ways to use constants of specific types. Following table gives you and overview of using constants of specific types:</p>

<table class="table black">
	<thead>
		<td>Data Type</td>
		<td>Examples of constants</td>
		<td>Description</td>
	</thead>
	<tr>
		<td>char</td>
		<td>'a', '1', '@'</td>
		<td>A character enclosed in single quotation mark is a Character constant.</td>
	</tr>
	<tr>
		<td>int</td>
		<td>1, 27, -10</td>
		<td>An integer value written as it is act as an Integer constant.</td>
	</tr>
	<tr>
		<td>float</td>
		<td>1.23f, 5.00f, 2.564f</td>
		<td>A floating decimal number having a 'f' in the end indicates a Float constant.</td>
	</tr>
	<tr>
		<td>double</td>
		<td>1.23, 5.00, 2.564</td>
		<td>A floating point decimal number acts as a double constant.</td>
	</tr>
</table>


<br/>
<h3 id="variable-declaration">Variable Declaration</h3>
<hr class="large orange"/>
<p>In C language, before you use any variable, you need to declare them. The convention of declaring variables is:</p>

{% highlight cpp %}
data_type variable1, variable2, variable3 ...;
{% endhighlight %}

<p>Declaration first specifies a data type followed by a comma-separated list of variable names. For example,</p>
{% highlight cpp %}
int var_1, count, age;
{% endhighlight %}

<p>Above example declares 3 variables namely, var_1, count and age of type "int"; which implies that we can store integer values in these variables.</p>

<p>A variable can also be initialized during its declaration. Some sample declarations with initializations are shown below:</p>
{% highlight cpp %}
int    var_1 = 0,   var_2 = 102;
char   var_3 = 'a', var_4 = '1';
float  var_5 = 1.28;
double var_6 = 2.76;
{% endhighlight %}
<p>Above example shows some variable declaration with initializations to some default values.</p>
<ol class="list">
	<li>var_1 is initialized to value 0.</li>
	<li>var_2 is initialized to value 102.</li>
	<li>var_3 is initialized to character 'a'.</li>
	<li>var_4 is initialized to character '1'.</li>
	<li>var_5 is initialized to decimal value 1.28 with single precision.</li>
	<li>var_6 is initialized to decimal value 2.76 with double precision.</li>
</ol>

<br/>
<h3 id="qualifiers">Qualifiers and examples</h3>
<hr class="large orange" />
<p>
	Along with data types, we have optional <span class="bold italic orange">qualifiers</span> that can be used. These qualifiers are applied to the basic data types in order to enhance their characteristics. Following are the qualifiers available in C language:
</p>

<p class="text-center"><span class="black bold">Qualifiers in C language</span></p>
<table class="table black">
	<tr>
		<td>short</td>
		<td>long</td>
		<td>signed</td>
		<td>unsigned</td>
	</tr>
</table>

<p class="italic clay bold">short and long:</p>
<p>short and long qualifiers when applied to basic data type changes the size of the data type. When qualifier short is applied to int, it changes the size of variable to 2 bytes, and when qualifier long is applied to int, it changes size of variable to 4 bytes.</p>
{% highlight cpp %}
short int var_1;
long int var_2;
{% endhighlight %}

<p>In above example, size of variable var_1 is 2 bytes and size of variable var_2 is 4 bytes.</p>

<p class="italic clay bold">signed and unsigned:</p>
<p>signed and unsigned qualifiers when applied to basic data types does not alter the length of the variable, instead it changes the range of the values that can be stored in it. As the name suggests, when we apply "signed" to a basic data type then we can store both positive and negative values in that variable. On the other hand, when we apply "unsigned" then we are restricted to store only non-negative values in the variable.</p>

<div class="arial note purple">
	<ol class="list">
		<li>By default "signed" qualifier is applied to all data types.</li>
	</ol>
</div>

<br/>
<div class="tip green-blue">
	<p>
		We can apply different combinations of qualifiers to basic data types. For example,
{% highlight cpp %}
unsigned long int var_3;
{% endhighlight %}
Above example makes size of var_3 to be 4 bytes and it allows only non-negative values to be stored in it.
	</p>
</div>

<br/>
<div class="arial bold italic text-center clay thought"><span class="orange">Practice</span> will make you <span class="orange">perfect</span>.</div>

<br/>
<a class="btn btn-default" href="{% post_url /courses/c101/2014-01-25-c101-input-output %}">Read Next</a>