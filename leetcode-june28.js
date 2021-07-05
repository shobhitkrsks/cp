var ip = prompt("Enter input string");

var removeDuplicates = function(s) {
    var ar = [];
    var n = s.length;

    for(var i = 0;i<n;i++)
    {
        if(ar.length==0)
        {
            ar.push(s[i]);
        }
        else if(ar[ar.length-1] == s[i])
        {
            ar.pop();
        }
        else
        {
            ar.push(s[i]);
        }
    }

    var res="";

    ar.forEach( (element) => {
        res+=element;
    });


    return res;


};

console.log(removeDuplicates(ip));