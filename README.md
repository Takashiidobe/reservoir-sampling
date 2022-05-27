# Reservoir Sampling

This repo includes code to do a reservoir sample over the numbers 1-100
in C (and randomly samples 5 numbers). 

Reservoir Sampling is useful to randomly sample N numbers (in our case,
5) over a potentially infinite data stream (100 numbers).

There's also a script, `distribution.py` that aggregates the numbers into
a Counter, sorted by occurrence count.
