let fizzbuzz = (x: int) => {
  if (x mod 3 === 0 && x mod 5 == 0) {
    Js.log("fizzbuzz");
  } else if (x mod 3 === 0) {
    Js.log("fizz");
  } else if (x mod 5 === 0) {
    Js.log("buzz");
  } else {
    Js.log(x);
  }
};

for (x in 1 to 100) {
  fizzbuzz(x);
}
