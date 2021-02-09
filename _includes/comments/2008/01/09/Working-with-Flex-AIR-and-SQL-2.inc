
<div class="comment" id="c_1713676078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676078">1</a> by Raul Riera
		posted on 1/10/2008 at 2:54 AM
		</div>
		<div class="comment_text"><p>Do you know if the lack of remote SQL connection is part of the "BETANESS" of AIR or it will never happen without the need of a remote web language?<br>It will be nice to create / connect to sqlite databases on a remote central machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676084">2</a> by Raymond Camden
		posted on 1/10/2008 at 3:13 AM
		</div>
		<div class="comment_text"><p>I honestly don't know. I know AIR has network abilities - so in theory someone could write the connectors one time and share it with the world.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676101">3</a> by Raul Riera
		posted on 1/10/2008 at 3:32 AM
		</div>
		<div class="comment_text"><p>Hmmm I will have to dig on that, it could be the thing I need. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676083">4</a> by Gareth
		posted on 1/10/2008 at 6:59 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Thanks for putting up your code.  I know that whenever anyone puts code up, everyone's a critic :)</p><p>In my flex/AIR travels I came across a couple of things that may make creating multiple SQL statements a little easier.  You'll need to start adding event handling to your code in order to do the asynchronous stuff without throwing an error because A has not finished when B runs (once A is done, go B, once B done, go C, etc).</p><p>Here's something I came across that I thought was a clever way of doing things that I've modified slightly to fit your model:</p><p>private var statements:Array = [];</p><p>public function init():void {<br>	statements.push( "CREATE TABLE IF NOT EXISTS clients(" +<br>	" id INTEGER PRIMARY KEY AUTOINCREMENT, " +<br>	" name TEXT, " +<br>	" description TEXT " +<br>	");" );<br>	statements.push( "CREATE TABLE IF NOT EXISTS projects(" +<br>	" id INTEGER PRIMARY KEY AUTOINCREMENT, " +<br>	" name TEXT, " +<br>	" description TEXT, " +<br>	" clientidfk INTEGER, " +<br>	" active INTEGER " +<br>	");" );<br>	statements.push( "CREATE TABLE IF NOT EXISTS hours(" +<br>	" id INTEGER PRIMARY KEY AUTOINCREMENT, " +<br>	" description TEXT, " +<br>	" clientidfk INTEGER, " +<br>	" projectidfk INTEGER, " +<br>	" hours NUMERIC, " +<br>	" date DATE " +<br>	");" );<br>	conn.openAsync(dbFile);<br>	executeNext();<br>}</p><p>private function executeNext( e:SQLEvent=null ) {<br>	if (statements.length &gt; 0) {<br>		createStmt = new SQLStatement;<br>		createStmt.sqlConnection = conn;<br>		createStmt.text = statements.shift();<br>		createStmt.execute( -1, new Responder( executeNext, errorDBHandler ));<br>	} else {<br>		conn.close();<br>		dbReady();<br>	}<br>}</p><p>The Responder class takes 2 functions, the first is for a successful SQL call, the second is for an unsuccessful call.  It takes the place of the 2 listener events that you initially placed.  Then it recursively calls the "executeNext()" function and shifts each statement off of the statements array, executing each one as it goes.  Once it gets a result event, it calls the next one, until all statements have been called.  Once all are done, it goes to dbReady().</p><p>This was borrowed from the employeeDirectory code at Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676086">5</a> by Raymond Camden
		posted on 1/10/2008 at 7:34 AM
		</div>
		<div class="comment_text"><p>Wow. I got to say - thats nice. I'm not going to use it for now - as I want to focus on other parts of the app - but next time I will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676082">6</a> by Gareth
		posted on 1/10/2008 at 7:41 AM
		</div>
		<div class="comment_text"><p>One other thing I found,<br>you forgot to add a clickHandler to the projects.clientFilter combobox, so it doesn't matter if you switch clients, it still shows all.</p><p>For the date problem you were encountering, have you tried using Date.parse(recent date) - Date.parse(older date) or is it a dB issue?  I've found Date.parse will parse just about anything (all textual dates as well), and do a good job of returning values.  You just have to convert it back to a date after that to find the elapsed time difference.</p><p>Sorry for all of the "and don't forget this" posts :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676085">7</a> by Raymond Camden
		posted on 1/10/2008 at 7:43 AM
		</div>
		<div class="comment_text"><p>Ah yes - I forgot to release note the client filter. I knew about that - my issue was (and why I didn't make it work) was that I need a simple way to clear that filter.</p><p>For the date issue - all I want to do is mod my 'get hours' sql to get records where date == sometime today. Nothing I tried worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676087">8</a> by Gareth
		posted on 1/10/2008 at 4:54 PM
		</div>
		<div class="comment_text"><p>One last thing,<br>I don't know if you've seen it or not, but Firefox now has a SQLite Manager extension which allows you to view data, edit tables/data/indicies, and run queries.  Kinda nice and makes it easier to check queries rather than having to rebuild your app each time with the modified query.</p><p>(Oh yes, I found 2 errors with my previous code.  It should be e:SQLResult that is passed into executeNext and executeNext needs a return datatype of "void")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676081">9</a> by Raymond Camden
		posted on 1/10/2008 at 5:06 PM
		</div>
		<div class="comment_text"><p>Actually, I'm running another AIR app to do my queries. I forget the name (I'm downstairs with my laptop), but I'm going to blog about it later today. I'll find the FF plugin as well to let folks know about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676088">10</a> by dc
		posted on 1/10/2008 at 6:00 PM
		</div>
		<div class="comment_text"><p>a bit unrelated, but this is a fairly basic ORM for AIR which uses annotations in AS VO's to maintain the database.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoenraets.org%2Fblog%2F2007%2F10%2Fannotating-actionscript-classes-with-custom-metadata-simple-orm-framework-for-air%2F%3Af4nsHsxEaM1TDvLoE9UiSTJx8IA&amp;cuid=3321886" rel="nofollow noopener" title="http://coenraets.org/blog/2007/10/annotating-actionscript-classes-with-custom-metadata-simple-orm-framework-for-air/">http://coenraets.org/blog/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676089">11</a> by Gareth
		posted on 1/10/2008 at 9:01 PM
		</div>
		<div class="comment_text"><p>@dc,<br>Now that is *really* nice.  I'll have to give that a try.  Only modification I may make is to prevent all columns from being uppercased, but there are quite a few things in there I haven't yet played around with (in Flex or AIR).  Nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676092">12</a> by CG
		posted on 4/16/2008 at 1:02 AM
		</div>
		<div class="comment_text"><p>Gareth - THANK YOU!  Not quite sure why it is that Air doesn't support BEGIN/END transaction...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676094">13</a> by Stefan@JustRIA
		posted on 7/31/2008 at 2:28 AM
		</div>
		<div class="comment_text"><p>I prefer to create SQL in an embedded file - each statement postfixed by ';'. Then, this code splits the SQL into single statements and executes all step by step (error handling for clarity not included):</p><p>           	try {</p><p>           		// Separate all statements<br>	           	var parts:Array = createSQL.split( ');' );</p><p>           		for( var i:int; i&lt;parts.length; i++  ) {</p><p>           			// Only, if we really have an SQL statement<br>           			if ( '' != parts[i] ) {<br>	           			var realStatement:String = parts[i] + ');';<br>			           	createStmt.text = realStatement;<br>	           			createStmt.execute();	<br>           			}<br>           		}</p><p>           	} catch( error:SQLError ) {</p><p>           		<a href="http://disq.us/url?url=http%3A%2F%2FAlert.show%3A8ySVNM2AAGzwn9vL5mu_ToewhBk&amp;cuid=3321886" rel="nofollow noopener" title="Alert.show">Alert.show</a>( 'Sorry, DB error: ' + error.details );</p><p>           	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676093">14</a> by Raymond Camden
		posted on 7/31/2008 at 5:24 AM
		</div>
		<div class="comment_text"><p>That's pretty slick. Thanks for sharing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676091">15</a> by Stefan@JustRIA
		posted on 7/31/2008 at 6:42 AM
		</div>
		<div class="comment_text"><p>Additionally, here's another small utility I created: CPreferencesManager manages application preferences by means of a key/value set:</p><p>Here is how to use it to make window positions persist after relaunch of an application:</p><p>1. Create an instance:</p><p>  &lt;tracker:CPreferencesManager 	id="thePrefs" /&gt;</p><p>2. Attach windowMove events to your Window:</p><p>windowMove="thePrefs.setPreference('main.window.x', this.nativeWindow.x.toString() ); thePrefs.setPreference('main.window.y', this.nativeWindow.y.toString() );"</p><p>3.  After creationComplete, move the window to its position of the one but last launch:</p><p>   var posX:int = int( thePrefs.getPreference('main.window.x' ) );<br>   var posY:int = int( thePrefs.getPreference('main.window.y' ) );<br>   move( posX, posY );</p><p>The implementation:</p><p>package <a href="http://disq.us/url?url=http%3A%2F%2Fcom.your.company%3AugkJajSJjdmN2BYBfD6AlekBAIM&amp;cuid=3321886" rel="nofollow noopener" title="com.your.company">com.your.company</a><br>{<br>	import flash.filesystem.File;<br>	import flash.filesystem.FileMode;<br>	import flash.filesystem.FileStream;<br>	import flash.utils.ByteArray;<br>	import flash.utils.Dictionary;<br>	import flash.utils.IDataInput;<br>	import flash.utils.IDataOutput;<br>	import flash.utils.IExternalizable;</p><p>	import mx.controls.Alert;</p><p>	public class CPreferencesManager implements IExternalizable<br>	{</p><p>		private var _prefValues:Dictionary;<br>		private	var	_prefsStream:FileStream;</p><p>		public function CPreferencesManager()<br>		{</p><p>			_prefValues = new Dictionary();<br>			loadPreferences();</p><p>		}</p><p>		public function loadPreferences():void {</p><p>			var fp: File = File.applicationStorageDirectory;</p><p>			fp = fp.resolvePath( 'prefs.xml' );</p><p>			if ( fp.exists ) {</p><p>				_prefsStream = new FileStream();<br>				<a href="http://disq.us/url?url=http%3A%2F%2F_prefsStream.open%3AeUbJ1hZYuEHssQaaG2RFvuyu8Ok&amp;cuid=3321886" rel="nofollow noopener" title="_prefsStream.open">_prefsStream.open</a>( fp, FileMode.READ);</p><p>				readExternal( _prefsStream );<br>				_prefsStream.close();</p><p>			} else {<br>				_prefValues[ 'appName' ] = 'tracker'; // test-code<br>				savePreferences();<br>			}</p><p>		}</p><p>		public function savePreferences():void {</p><p>			var fp: File = File.applicationStorageDirectory;</p><p>			fp = fp.resolvePath( 'prefs.xml' );</p><p>			_prefsStream = new FileStream();<br>			<a href="http://disq.us/url?url=http%3A%2F%2F_prefsStream.open%3AeUbJ1hZYuEHssQaaG2RFvuyu8Ok&amp;cuid=3321886" rel="nofollow noopener" title="_prefsStream.open">_prefsStream.open</a>( fp, FileMode.WRITE );</p><p>			writeExternal( _prefsStream );<br>			_prefsStream.close();</p><p>		}</p><p>		public function setPreference( name:String, value:Object ):void {</p><p>			_prefValues[ name ] = value;<br>			savePreferences();</p><p>		}</p><p>		public function getPreference( name:String ):Object {</p><p>			return _prefValues[ name ];</p><p>		}</p><p>		public function readExternal(input:IDataInput):void<br>	    {</p><p>	        var bytes:ByteArray = new ByteArray();<br>	      	input.readBytes( bytes, 0, input.bytesAvailable );</p><p>	        var q:Object = bytes.readObject();</p><p>	        _prefValues = new Dictionary();</p><p>	        for( var p:Object in q ) {<br>	        	_prefValues[ p ] = q[p];<br>	        }</p><p>	        // <a href="http://disq.us/url?url=http%3A%2F%2FAlert.show%3A8ySVNM2AAGzwn9vL5mu_ToewhBk&amp;cuid=3321886" rel="nofollow noopener" title="Alert.show">Alert.show</a>( _prefValues.toString() );</p><p>	    }</p><p>		public function writeExternal(output:IDataOutput):void<br>	    {</p><p>	        var bytes:ByteArray = new ByteArray();<br>	        bytes.writeObject( _prefValues );</p><p>	        output.writeBytes( bytes );<br>	    }</p><p>	}<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676095">16</a> by Raymond Camden
		posted on 7/31/2008 at 6:20 PM
		</div>
		<div class="comment_text"><p>Is there any kind of AIR cookbook? Solutions like this need to be aggregated. I know there is a Flex cookbook, but does it allow you to filter by AIR solutions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676096">17</a> by Gareth Arch
		posted on 7/31/2008 at 9:36 PM
		</div>
		<div class="comment_text"><p>Perhaps a nice co-conspirator to <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3F%3A23eZBrqxzn1bcGsIxDCM8mC16Us&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org?">cflib.org?</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fairlib.org%3F%3AWUl9ktNkD5-2TjPLQAAmia92BEg&amp;cuid=3321886" rel="nofollow noopener" title="airlib.org?">airlib.org?</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fflexairlib.org%3F%3AdUvEbxtPB79QSAVH5bWElsuEfiY&amp;cuid=3321886" rel="nofollow noopener" title="flexairlib.org?">flexairlib.org?</a><br>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676097">18</a> by Raymond Camden
		posted on 7/31/2008 at 11:16 PM
		</div>
		<div class="comment_text"><p>Be my guest. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676098">19</a> by Stefan@JustRIA
		posted on 7/31/2008 at 11:28 PM
		</div>
		<div class="comment_text"><p>I just posted my solution to Flex Cookbook - but neet to fix it soon:</p><p>  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fcommunityengine%2Findex.cfm%3Fevent%3Dshowdetails%26postid%3D10064%26loc%3Den_US%26productid%3D2%3AtZOE2KrTdR2foDH08SvUI11PIKo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/communityengine/index.cfm?event=showdetails&amp;postid=10064&amp;loc=en_US&amp;productid=2">http://www.adobe.com/cfusio...</a></p><p>Why? The code</p><p>   output.writeObject( _prefValues );</p><p>writes an object, but does not save it's class, therefore, one has to register its class first:</p><p>  registerClassAlias( "flash.utils.Dictionary", Dictionary );</p><p>Likewise, one has to register the class before</p><p>   registerClassAlias( "flash.utils.Dictionary", Dictionary );<br>   _prefValues = input.readObject() as Dictionary;</p><p>first.</p><p>I wonder, why the lib doesn't do this itself. Now, it tends to be hard, to write an universal serializer, which maintains all class, of all linked objects.</p><p>Hm, too bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676099">20</a> by Gareth Arch
		posted on 8/1/2008 at 12:11 AM
		</div>
		<div class="comment_text"><p>@Ray,<br>wouldn't want to take away from the fun you seem to have of building/hosting all of these sites :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676100">21</a> by Stefan@JustRIA
		posted on 8/2/2008 at 11:53 PM
		</div>
		<div class="comment_text"><p>Actually, Adobe has an AIR cookbook here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fcommunityengine%2Findex.cfm%3Fevent%3Dhomepage%26productId%3D4%3AO5w0Gp2JUAHgk0_14QU7FLFdO3A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/communityengine/index.cfm?event=homepage&amp;productId=4">http://www.adobe.com/cfusio...</a></p></div>
	</div>
</div>
		