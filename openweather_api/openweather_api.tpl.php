<div class="weather" id="page-weather">
	<p style="float: right"><img src="http://openweathermap.org/img/wn/<?php print $icon ?>@2x.png"></p>
	<p><h2><?php print $city ?>, <?php print $country_code ?> </h2></p>
	<p><h3><b><?php print $weather ?></b></h3></p>
	<p><h3><b><?php print intval($temp) ?><span> °C</span></b></h3></p>
	<p>Description: <?php print $desc ?></p>
	<p>Wind: <b><?php print $wind ?> m/s</b></p>
	<p>Humidity: <b><?php print $hum ?> %</b></p>
	<p>Pressure: <b><?php print $press ?> hPa</b></p>
	
	<div>
		<?php global $base_url; ?>
		<p>Check out weather for another region by visiting <b><?php print $base_url ?>/weather/[city]/[country code]</b>. For example:</p>
		<ul>
			<li>
				<a href="/weather/los+angeles/us" target="_blank"><?php print $base_url ?>/weather/los+angeles/us</a>
			</li>
			<li>
				<a href="/weather/tel+aviv/il" target="_blank"><?php print $base_url ?>/weather/tel+aviv/il</a>
			</li>
			<li>
				<a href="/weather/kharkiv/ua" target="_blank"><?php print $base_url ?>/weather/kharkiv/ua</a>
			</li>
		</ul>
	</div>
	
	<p style="float: right"><i>Data from <a href="https://openweathermap.org" target="_blank">openweathermap.org</a></i>
</div>