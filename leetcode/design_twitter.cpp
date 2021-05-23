#include <bits/stdc++.h>
using namespace std;

class Twitter {

    struct Tweet {
        int index;
        int tweetId;
        int userId;
    };

    struct compTweet {
        bool operator()(const Tweet& a, const Tweet& b){
            if(a.index < b.index){
                return true;
            }
            return false;
        }
    };

    int totalTweets;
    vector<vector<Tweet>> users;   // {tweetNumber, tweetId}
    vector<unordered_set<int>> following;   // userId

    

public:
    /** Initialize your data structure here. */
    Twitter() {
        totalTweets = 0;
        users.assign(501, vector<Tweet>());
        following.assign(501, unordered_set<int>());        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        totalTweets++;
        users[userId].push_back({totalTweets, tweetId, userId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        // priority_queue<pair<int, int>, vector<pair<int, int>>, compTweet> q;
        priority_queue<Tweet, vector<Tweet>, compTweet> q;
        vector<int> inds(501);
        
        for(auto uid : following[userId]){
            if(!users[uid].empty()){
                q.push(users[uid].back());
                inds[uid] = users[uid].size() - 1;
            }
        }
        if(!users[userId].empty()){
            q.push(users[userId].back());
            inds[userId] = users[userId].size() -1;
        }
        vector<int> feed;
        for(int i = 0; i < 10 && !q.empty(); i++){
            Tweet top = q.top();
            feed.push_back(top.tweetId);
            q.pop();
            inds[top.userId]--;
            if(inds[top.userId] >= 0){
                q.push(users[top.userId][inds[top.userId]]);
            }
        }
        return feed;
        // vector<int> feed;
        // for(int uid : following[userId]){
        //     for(Tweet t : users[uid]){
        //         q.push(t);
        //     }
        // }
        // for(int i = 0; i < 10 && !q.empty(); i++){
        //     feed.push_back(q.top().tweetId);
        //     q.pop();
        // }
        // return feed;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */