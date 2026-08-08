/**
 * @param {number} numCourses
 * @param {number[][]} prerequisites
 * @return {boolean}
 */
var canFinish = function(numCourses, prerequisites) {
    let n=prerequisites.length;
    //adj list
    let adj=new Map();
    for(let i=0;i<n;i++)
    {
        let u=prerequisites[i][0];
        let v=prerequisites[i][1];
        if(!adj.has(v))
        {
            adj.set(v,[]);
        }
        adj.get(v).push(u);
    }
    //indegree
    let indegree=new Array(numCourses).fill(0);
    for(let [key,neighbour] of adj)
    {
        for(let j of neighbour)
        {
            indegree[j]++;
        }
    }
    //apply BFS
    let q=[];
    for(let i=0;i<numCourses;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    let front=0;
    let count=0;
    while(front <q.length)
    {
        let node=q[front];
        front++;
        count++;
        for(let i of (adj.get(node)) || [])
        {
            indegree[i]--;
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
    }
    if(count==numCourses){
        return true;
    }
    return false;





    
};