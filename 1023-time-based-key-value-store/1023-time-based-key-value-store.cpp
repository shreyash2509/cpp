class TimeMap
{
public:
    map<string, vector<pair<int, string>>> storage;
    TimeMap()
    {
       
    }
    void set(string key, string value, int timestamp)
    {
        storage[key].push_back({timestamp, value});
    }
    string get(string key, int timestamp)
    {
        if (storage[key].size() == 0)
            return "";

        int arr_len = storage[key].size();
        int l = 0;
        int h = arr_len - 1;
        int mid = -1;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (storage[key][mid].first <= timestamp)
                l = mid + 1;
            else
                h = mid - 1;
        }
        if (l == 0)
            return "";
        return storage[key][l - 1].second;
    }
};