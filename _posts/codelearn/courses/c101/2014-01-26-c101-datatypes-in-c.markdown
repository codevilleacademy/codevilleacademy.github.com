---
layout: lecture-session
title: "Variables and Datatypes"
category: c101
comments: true
---
<div class="lecture-title">
	{{page.title}}
</div>

{% include /ui/agenda.html %}

<section>
	<div id="variables" class="section-title">
		Variables
	</div>
	<div class="para">
		<emphasis class="highlight">Variables</emphasis> are the basic data objects that are changed continuously during the program execution. Thus we infer that the variable is an entity in C language that are used to store and retrieve some values that we may require during our program execution.
	</div>
	<div class="para">
		Every variable is identified by its variable name. This variable names are bounded by some rule, this implies, that you can give your variables any name unless they break the variable naming convention.
	</div>
	<div class="para">
		<emphasis class="bold">Variable Naming conventions:</emphasis>
		<ul>
			<li>Variable names are made up of letters, digits and underscore ('_')</li>
			<li>The first character of the variable name should be a letter or an underscore ('_')</li>
			<li>Following letters can be anything and any combination of letters, digits and underscore ('_')</li>
			<li>Variable names should not be one of the keywords of C, because they are reserved for specific purpose in C.</li>
		</ul>
	</div>
	<div class="note-box">
		<div class="para centered">
			<emphasis class="bold">List of C keywords</emphasis>
		</div>
		<table class="table centered">
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
	</div>

<div class="tip-box">
	<ol>
		<li>
			To improve readability of your program, the variable names should be meaningful, specific to purpose and preferably long.
		</li>
		<li>
			Variables are case sensitive, that is, Upper case and Lower case letters are distinct. Hence 'V' and 'v' are two different names.
		</li>
		<li>
			Tradition C practice is to use lower case for variable names.
		</li>
	</ol>
</div>
</section>

<section>
	<div id="data-types" class="section-title">
		Data Types and Sizes
	</div>
	<div class="para">
		<emphasis class="highlight">Data Type</emphasis> in simple terms is "type of the data". Data type of a variable tells which type of data will be stored in the variable.
	</div>
	<div class="para">
		There are only few data types in C, these are
	</div>
	<table class="table">
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
</section>

<section>
	<div id="constants" class="section-title">
		Constants
	</div>
	<div class="para">
		<emphasis class="highlight">Constants</emphasis> are data objects that contains a constant value of a particular type. There are some specific ways to use constants of specific types. Following table gives you an overview of using constants of specific types:
	</div>
	<table class="table">
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
</section>

<section>
	<div id="variable-declaration" class="section-title">
		Variable Declaration
	</div>
	<div class="para">
		In C language, before you use any variable, you need to declare them. The convention of declaring variables is:
	</div>

{% highlight cpp %}
	data_type variable1, variable2, variable3 ...;
{% endhighlight %}
	
<div class="para">
	Declaration first specifies a data type followed by a comma-separated list of variable names. For example,
</div>
	
{% highlight cpp %}
	int var_1, count, age;
{% endhighlight %}

<div class="para">
	Above example declares 3 variables namely <emphasis class="code">var_1</emphasis>, <emphasis class="code">count</emphasis> and <emphasis class="code">age</emphasis> of type <emphasis class="code">int</emphasis>, which implies that we can store integer values in these variables.
</div>

<div class="para">
	A variable can also be initialized during its declaration. Some sample declarations with initializations are shown below:
</div>
	
{% highlight cpp %}
int    var_1 = 0,   var_2 = 102;
char   var_3 = 'a', var_4 = '1';
float  var_5 = 1.28;
double var_6 = 2.76;
{% endhighlight %}
	
<div class="para">
	Above example shows some variable declaration with initializations to some default values.
</div>
<ul>
	<li><emphasis class="code">var_1</emphasis> is initialized to value 0.</li>
	<li><emphasis class="code">var_2</emphasis> is initialized to value 102.</li>
	<li><emphasis class="code">var_3</emphasis> is initialized to character 'a'.</li>
	<li><emphasis class="code">var_4</emphasis> is initialized to character '1'.</li>
	<li><emphasis class="code">var_5</emphasis> is initialized to decimal value 1.28 with single precision.</li>
	<li><emphasis class="code">var_6</emphasis> is initialized to decimal value 2.76 with double precision.</li>
</ul>
</section>

<section>
	<div id="qualifiers" class="section-title">
		Qualifiers and examples
	</div>
	<div class="para">
		Along with data types, we have optional <emphasis class="highlight">qualifiers</emphasis> that can be used. These qualifiers are applied to the basic data types in order to enhance their characteristics. Following are the qualifiers available in C language:
	</div>
	<div class="para centered">
		<emphasis class="bold">
			Qualifiers in C language
		</emphasis>
		<table class="table">
			<tr>
				<td>short</td>
				<td>long</td>
				<td>signed</td>
				<td>unsigned</td>
			</tr>
		</table>
	</div>
	<div class="para">
		<emphasis class="highlight">
			short and long
		</emphasis>
	</div>
	<div class="para">
		<emphasis class="bold">short and long</emphasis> qualifiers when applied to basic data type changes the size of the data type. When qualifier short is applied to int, it changes the size of variable to 2 bytes, and when qualifier long is applied to int, it changes size of variable to 4 bytes.
	</div>

{% highlight cpp %}
short int var_1;
long int var_2;
{% endhighlight %}

<div class="para">
	In above example, size of variable <emphasis class="code">var_1</emphasis> is 2 bytes and size of variable <emphasis class="code">var_2</emphasis> is 4 bytes.
</div>

<div class="para">
	<emphasis class="highlight">
		signed and unsigned
	</emphasis>
</div>
<div class="para">
	<emphasis class="bold">signed and unsigned</emphasis> qualifiers when applied to basic data types does not alter the length of the variable, instead it changes the range of the values that can be stored in it. As the name suggests, when we apply <emphasis class="code">signed</emphasis> to a basic data type then we can store both positive and negative values in that variable. On the other hand, when we apply <emphasis class="code">unsigned</emphasis> then we are restricted to store only non-negative values in the variable.
</div>

<div class="note-box">
	<ul>
		<li>
			By default <emphasis class="code">signed</emphasis> qualifier is applied to all data types.
		</li>
	</ul>
</div>

<div class="tip-box">
	<div class="para">
		We can apply different combinations of qualifiers to basic data types. For example,

{% highlight cpp %}
unsigned long int var_3;
{% endhighlight %}

Above example makes size of <emphasis class="code">var_3</emphasis> to be 4 bytes and it allows only non-negative values to be stored in it.
	</div>
</div>
</section>

<section>
	<a class="button" href="{% post_url /codelearn/courses/c101/2014-01-25-c101-input-output %}">Read Next</a>
</section>

{% include /ui/keywords.html %}