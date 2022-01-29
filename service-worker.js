importScripts('https://storage.googleapis.com/workbox-cdn/releases/5.1.2/workbox-sw.js');
workbox.setConfig({ debug: false });

//import {registerRoute} from 'workbox-routing';
const {registerRoute} = workbox.routing;
const {NetworkFirst} = workbox.strategies;


// cache the home page
registerRoute(
  	/\/$/,
	new NetworkFirst()
);

registerRoute(
  	/\.js$/,
	new NetworkFirst()
);

registerRoute(
  	/\.css$/,
	new NetworkFirst()
);

registerRoute(
  	/images\/.*$/,
	new NetworkFirst()
);

registerRoute(
  	/2[\d{3}]/,
	new NetworkFirst()
);