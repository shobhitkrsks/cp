var n = Number(prompt("Enter N:"));
var ratings = [];
for(var i = 0; i<n; i++)
{
    ratings[i] = Number(prompt("Enter " + i + "th rating:"));
}

var candy = function(ratings) {
    var n = ratings.length;
    var l2r = [];
    var r2l = [];
    for(var i = 0; i<n;i++)
    {
        l2r[i]=r2l[i]=1;
    }

    for(var i = 1; i<n;i++)
    {
        if(ratings[i]>ratings[i-1])
            l2r[i]=l2r[i-1]+1;
    }

    for(var i = n-2; i>=0;i--)
    {
        if(ratings[i]>ratings[i+1])
            r2l[i]=r2l[i+1]+1;
    }

    var sum=0;
    for(var i = 0; i<n;i++)
    {
        sum+=Math.max(l2r[i], r2l[i]);
    }

    return sum;
};

console.log(candy(ratings));

