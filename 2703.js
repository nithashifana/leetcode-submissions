/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
  let c = 0;
  while(args[c ++] !== undefined) {}
      return c-1;
  
};

/**
* argumentsLength(1, 2, 3); // 3
*/