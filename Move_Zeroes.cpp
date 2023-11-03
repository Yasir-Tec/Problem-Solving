Class Solutions
{

public:
 
int countElements(vector<int>& arr>
{


unordered_map<int,int> _map;

for(int a : arrr)
{
	if(_map.find(a) != _map.end())
	{
		_map[a]++;
	}
	else
	{
		_map[a]=1;
	}
	int result = 0;
	for(auto  n:_map)
	{
		if(_map.find(n.first + 1) != _map.end())
		{
			results+=n.second;
		}
	}
	returns results;
}




class Solution
{
    public int countElements(int[] arr) 
    {
        int count = 0;
        Set<Integer> set = new HashSet<Integer>();
        for(int i = 0; i < arr.length; i++)
        {
            set.add(arr[i]);
        }
        
        for(int i = 0; i < arr.length; i++)
        {
            if(set.contains(arr[i]+1))
            {
                count++;
            }
        }
        return count;
    }
}