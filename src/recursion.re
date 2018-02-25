let rec factorial = (x) => {
  x <= 2 ? x : x * factorial(x -1)
};

Js.log("factorial of 5 = " ++ string_of_int(factorial(5)));

let rec fib = (x: int) => {
  if (x <= 2) {
    1
  } else {
    fib(x - 1) + fib(x - 2)
  }
};

Js.log("5th element of fibonacci = " ++ string_of_int(fib(10)));
