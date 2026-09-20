class Twitter:
    def __init__(self):
        self.time = 0
        self.tweets = defaultdict(list)     # userId -> [(timestamp, tweetId)]
        self.following = defaultdict(set)   # follower -> followees

    def postTweet(self, userId: int, tweetId: int) -> None:
        self.time += 1
        self.tweets[userId].append((self.time, tweetId))

    def getNewsFeed(self, userId: int) -> list[int]:
        heap = []

        # User should see their own tweets too
        self.following[userId].add(userId)

        # Add most recent tweet from each followed user
        for followee in self.following[userId]:
            if self.tweets[followee]:
                idx = len(self.tweets[followee]) - 1
                timestamp, tweetId = self.tweets[followee][idx]

                heapq.heappush(
                    heap,
                    (-timestamp, tweetId, followee, idx - 1)
                )

        res = []

        while heap and len(res) < 10:
            _, tweetId, followee, nextIdx = heapq.heappop(heap)
            res.append(tweetId)

            # Push the next older tweet from same user
            if nextIdx >= 0:
                timestamp, nextTweetId = self.tweets[followee][nextIdx]

                heapq.heappush(
                    heap,
                    (-timestamp, nextTweetId, followee, nextIdx - 1)
                )

        return res

    def follow(self, followerId: int, followeeId: int) -> None:
        self.following[followerId].add(followeeId)

    def unfollow(self, followerId: int, followeeId: int) -> None:
        if followerId != followeeId:
            self.following[followerId].discard(followeeId)