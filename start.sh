#!/bin/bash

rm -rf _site
#eleventy --serve --quiet
netlify dev -c "eleventy --serve --quiet"
