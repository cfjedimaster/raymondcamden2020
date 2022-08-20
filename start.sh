#!/bin/bash

rm -rf _site
#eleventy --serve --quiet
ISLOCAL=true netlify dev -c "eleventy --serve --quiet"
