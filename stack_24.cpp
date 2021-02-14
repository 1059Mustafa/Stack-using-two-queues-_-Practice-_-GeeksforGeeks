void QueueStack :: push(int x)
{
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        int ans=-1;
        if(q1.size()==0)
        {
            return ans;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        ans=q1.front();
        q1.pop();
        while(q2.size()>0)
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
}

