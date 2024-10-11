// Add the released chair back to the available pool
available.push(occupied.top().second);
occupied.pop();
}
​
int currentChairNo;
​
// If no chairs are available, assign a new chair number
if (available.empty()) {
currentChairNo = chairNo++; // Use and increment chairNo
} else {
// If there are available chairs, use the smallest numbered chair
currentChairNo = available.top();
available.pop();
}
​
// If this is the target friend, return the chair number assigned to them
if (targetArrival == arrTime) return currentChairNo;
​
// Add this friend's leaving time and their chair number to the occupied list
occupied.push({leavingTime, currentChairNo});
}
​
// Default return (though in practice, it will never reach here)
return -1;
}
};
```