
<div class="comment" id="c_2760618017">
	<div>
		<img src="https://disqus.com/api/users/avatars/galuszkak.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760618017">1</a> by Kamil Gałuszka
		posted on 7/1/2016 at 4:59 PM
		</div>
		<div class="comment_text"><p>It will be great to include things like Observables in Ionic 2 which are making Angular 2 so powerful.</p><p></p><pre><code><br>  &lt;ion-list inset=""&gt;<br>    &lt;ion-item *ngfor="let cat of cats$ | async" (click)="selectCat(cat)"&gt;<br>      {{cat.name}}<br>    &lt;/ion-item&gt;<br>  &lt;/ion-list&gt;<br></code></pre><p></p><p></p><pre><code><br>export class HomePage {<br><br>  private cats$:Observable&lt;any&gt;;<br><br>  constructor(private navController: NavController, public catProvider:CatProvider) {<br>    this.cats$ = this.catProvider.load()<br>  }<br><br>  selectCat(cat) {<br>    this.navController.push(CatPage, {id:cat.id});<br>  }<br>}<br></code></pre><p></p><p>You can read more here:<br><a href="https://disq.us/url?url=https%3A%2F%2Fangular.io%2Fdocs%2Fts%2Flatest%2Fapi%2Fcommon%2Findex%2FAsyncPipe-class.html%3AKxAFpRHWZsSXA10MBM_LMP8el7c&amp;cuid=3321886" rel="nofollow noopener" title="https://angular.io/docs/ts/latest/api/common/index/AsyncPipe-class.html">https://angular.io/docs/ts/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2760622414">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760622414">2</a> (In reply to <a href="#c_2760618017">#1</a>) by Raymond Camden
		posted on 7/1/2016 at 5:01 PM
		</div>
		<div class="comment_text"><p>Oh damn - that's sexy. Thanks for sharing that!</p></div>
	</div>
</div>
		