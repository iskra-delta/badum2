# How to...

Install necessary tools first.

~~~
sudo apt install imagemagick
sudo apt install pngcheck
~~~

# Check image health

`pngcheck -v balums.png`

# Fix an image

`magick convert bad.png -strip fixed.png`

# Invert an image

`convert balums.png -channel RGB -negate inv-balums.png`

# Convert to lines

~~~
autotrace --input-format png --output-format svg \
          --line-threshold 1 --centerline \
          --output-file skeletonized_lines.svg balum1.png
~~~

# Convert from svg back to raster

`inkscape skeletonized_lines.svg --export-filename=skeletonized_lines.png`