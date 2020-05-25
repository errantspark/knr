### How would you test the word count program? 

I could test it with a fuzzer of some sort against WC as the ground truth? I could manually specify a test suite of inputs as well.

### What kinds of input are most likely to uncover bugs if there are any?

I would start by looking at inputs like \\t\\t\t\tt\t and multiple spaces, variations thereof. There's a 'big list of naughty strings' floating around on the internet that would be good to test against as well.
