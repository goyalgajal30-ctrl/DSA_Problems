/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let count = init;
    return{
        increment: function(){
           return ++init;
        },
        decrement: function(){
           return --init;
        },
        reset: function(){
            init = count;
            return init;
        },
    }
};


 const counter = createCounter(5)
  counter.increment(); 
 counter.reset(); 
  counter.decrement();
