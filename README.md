cordova-plugin-AppleAdvertising
======================
To install this plugin, follow the [Command-line Interface Guide](http://cordova.apache.org/docs/en/edge/guide_cli_index.md.html#The%20Command-line%20Interface).

If you are not using the Cordova Command-line Interface, follow [Using Plugman to Manage Plugins](http://cordova.apache.org/docs/en/edge/guide_plugin_ref_plugman.md.html).

Exposes four methods:

- __getIDFA__: returns IDFA as string
- __getIDFV__: returns IDFV as string
- __trackingEnabled__: returns bool that indicates whether add tracking is enabled
- __getIdentifiers__: returns object containing the above identifiers (idfa, idfv, trackingEnabled)

Each method takes two arguements, success and error functions.

Usage examples:

    window.plugins.AppleAdvertising.getIDFA(
      function(idfa) {
        console.log("got idfa: " + idfa);
      },
      function() {
        console.log("error loading idfa");
      }
    );
    
    window.plugins.AppleAdvertising.getIdentifiers(
      function(identifiers) {
        console.log("got idfa: " + identifiers.idfa);
        console.log("got idfv: " + identifiers.idfv);
        console.log("got trackingEnabled: " + identifiers.trackingEnabled);
      },
      function() {
        console.log("error loading identifiers");
      }
    );
