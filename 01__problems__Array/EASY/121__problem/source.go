package leetcode

// 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

func maxProfit(prices []int) int {
	max_profit := 0

	n := len(prices)
	if n == 1 {
		return max_profit
	}

	right_max_prices := make([]int, n-1, n-1)
	right_max := prices[n-1]
	for i := n - 2; i >= 0; i-- {
		right_max = max(right_max, prices[i+1])
		right_max_prices[i] = right_max
	}

	for i := 0; i < n-1; i++ {
		max_profit = max(max_profit, right_max_prices[i]-prices[i])
	}

	return max_profit
}
