#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
# define INF LONG_LONG_MAX
#define gc getchar_unlocked
void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
class Graph
{
    ll V; 
    list< pair<ll, ll> > *adj;
 
public:
    Graph(ll V);  
    void addEdge(ll u, ll v, ll w);
    void shortestPath(ll s);
};
Graph::Graph(ll V)
{
    this->V = V;
    adj = new list< pair<ll, ll> >[V];
}
 
void Graph::addEdge(ll u, ll v, ll w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
void Graph::shortestPath(ll src)
{
    set< pair<ll, ll> > setds;
     vector<ll> dist(V, INF);
    setds.insert(make_pair(0, src));
    dist[src] = 0;
    while (!setds.empty())
    {
        pair<ll, ll> tmp = *(setds.begin());
        setds.erase(setds.begin());
        ll u = tmp.second;
        list< pair<ll, ll> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            ll v = (*i).first;
            ll weight = (*i).second;
            if (dist[v] > dist[u] + weight)
            {
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    for (ll i = 0; i < V; ++i)
        printf("%lld ",dist[i]);
        printf("\n");
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll V,k,x,m,s;
    scanint(V);
    scanint(k);
    scanint(x);
    scanint(m);
    scanint(s);
    Graph g(V);
    for(ll i=0;i<k;i++)
    for(ll j=i+1;j<k;j++)
    {
    	g.addEdge(i,j,x);
	}
	ll p,q,r;
    for(ll i=0;i<m;i++)
    {
    	scanint(p);
    	scanint(q);
    	scanint(r);
    	g.addEdge(p-1, q-1,r);
	}
     g.shortestPath(s-1);
	}
    return 0;
}
