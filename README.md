# Coding Practice

This repository is for keeping hands-on coding skills sharp.

Recently I have been shifting toward a more modern software engineering workflow. My focus is on understanding the problem, making core engineering decisions around system design, data modeling, abstractions, complexity allocation, data structures, and learning how to effectively prompt agents to help with implementation.

At the same time, I still want to maintain the lower-level coding skills that can fade without regular practice: syntax fluency, boundary awareness, edge-case handling, and translating an idea into working code without AI assistance.

This repo exists for that practice. The solution implementations are written without AI assistance, while support files such as build configuration and this README may still be created or refined with AI.

The initial focus is LeetCode-style challenges in three language stacks:

- C++
- Go
- TypeScript

![LeetCode Stats](https://leetcard.jacoblin.cool/danielxfeng?theme=dark&font=Inter&ext=heatmap)

## Challenges

<table>
  <thead>
    <tr>
      <th width="20%">Id</th>
      <th width="20%">Challenge</th>
      <th width="20%">Difficulty</th>
      <th width="20%">Cat</th>
      <th width="20%">Links</th>
    </tr>
  </thead>
  <tbody>
    <tr><td>1</td><td>Two Sum</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/1.two-sum/go/">Go</a> · <a href="leetcode/1.two-sum/ts/">TS</a> · <a href="leetcode/1.two-sum/cpp/">C++</a></td></tr>
    <tr><td>15</td><td>3Sum</td><td>Medium</td><td>Double Points</td><td><a href="leetcode/15.three-sum/go/">Go</a> · <a href="leetcode/15.three-sum/ts/">TS</a> · <a href="leetcode/15.three-sum/cpp/">C++</a></td></tr>
    <tr><td>17</td><td>Letter Combinations of a Phone Number</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/17.letter-combinations-of-a-phone-number/go/">Go</a> · <a href="leetcode/17.letter-combinations-of-a-phone-number/ts/">TS</a> · <a href="leetcode/17.letter-combinations-of-a-phone-number/cpp/">C++</a></td></tr>
    <tr><td>18</td><td>4Sum</td><td>Medium</td><td>Double Points</td><td><a href="leetcode/18.four-sum/go/">Go</a> · <a href="leetcode/18.four-sum/ts/">TS</a> · <a href="leetcode/18.four-sum/cpp/">C++</a></td></tr>
    <tr><td>19</td><td>Remove Nth Node From End of List</td><td>Medium</td><td>Double Points</td><td><a href="leetcode/19.remove-nth-node-from-end-of-list/go/">Go</a> · <a href="leetcode/19.remove-nth-node-from-end-of-list/ts/">TS</a> · <a href="leetcode/19.remove-nth-node-from-end-of-list/cpp/">C++</a></td></tr>
    <tr><td>20</td><td>Valid Parentheses</td><td>Easy</td><td>Stack and Queue</td><td><a href="leetcode/20.valid-parentheses/go/">Go</a> · <a href="leetcode/20.valid-parentheses/ts/">TS</a> · <a href="leetcode/20.valid-parentheses/cpp/">C++</a></td></tr>
    <tr><td>24</td><td>Swap Nodes in Pairs</td><td>Medium</td><td>Linked List</td><td><a href="leetcode/24.swap-nodes-in-pairs/go/">Go</a> · <a href="leetcode/24.swap-nodes-in-pairs/ts/">TS</a> · <a href="leetcode/24.swap-nodes-in-pairs/cpp/">C++</a></td></tr>
    <tr><td>27</td><td>Remove Element</td><td>Easy</td><td>Double Points</td><td><a href="leetcode/27.remove-element/go/">Go</a> · <a href="leetcode/27.remove-element/ts/">TS</a> · <a href="leetcode/27.remove-element/cpp/">C++</a></td></tr>
    <tr><td>28</td><td>Find the Index of the First Occurrence in a String</td><td>Easy</td><td>String</td><td><a href="leetcode/28.find-the-index-of-the-first-occur-in-a-string/go/">Go</a> · <a href="leetcode/28.find-the-index-of-the-first-occur-in-a-string/ts/">TS</a> · <a href="leetcode/28.find-the-index-of-the-first-occur-in-a-string/cpp/">C++</a></td></tr>
    <tr><td>37</td><td>Sudoku Solver</td><td>Hard</td><td>Backtracking</td><td><a href="leetcode/37.sudoku-solver/go/">Go</a> · <a href="leetcode/37.sudoku-solver/ts/">TS</a> · <a href="leetcode/37.sudoku-solver/cpp/">C++</a></td></tr>
    <tr><td>39</td><td>Combination Sum</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/39.combination-sum/go/">Go</a> · <a href="leetcode/39.combination-sum/ts/">TS</a> · <a href="leetcode/39.combination-sum/cpp/">C++</a></td></tr>
    <tr><td>40</td><td>Combination Sum II</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/40.combination-sum-ii/go/">Go</a> · <a href="leetcode/40.combination-sum-ii/ts/">TS</a> · <a href="leetcode/40.combination-sum-ii/cpp/">C++</a></td></tr>
    <tr><td>45</td><td>Jump Game II</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/45.jump-game-ii/go/">Go</a> · <a href="leetcode/45.jump-game-ii/ts/">TS</a> · <a href="leetcode/45.jump-game-ii/cpp/">C++</a></td></tr>
    <tr><td>46</td><td>Permutations</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/46.permutations/go/">Go</a> · <a href="leetcode/46.permutations/ts/">TS</a> · <a href="leetcode/46.permutations/cpp/">C++</a></td></tr>
    <tr><td>47</td><td>Permutations II</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/47.permutations-ii/go/">Go</a> · <a href="leetcode/47.permutations-ii/ts/">TS</a> · <a href="leetcode/47.permutations-ii/cpp/">C++</a></td></tr>
    <tr><td>51</td><td>N-Queens</td><td>Hard</td><td>Backtracking</td><td><a href="leetcode/51.n-queens/go/">Go</a> · <a href="leetcode/51.n-queens/ts/">TS</a> · <a href="leetcode/51.n-queens/cpp/">C++</a></td></tr>
    <tr><td>53</td><td>Maximum Subarray</td><td>Medium</td><td>Array</td><td><a href="leetcode/53.maximum-subarray/go/">Go</a> · <a href="leetcode/53.maximum-subarray/ts/">TS</a> · <a href="leetcode/53.maximum-subarray/cpp/">C++</a></td></tr>
    <tr><td>55</td><td>Jump Game</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/55.jump-game/go/">Go</a> · <a href="leetcode/55.jump-game/ts/">TS</a> · <a href="leetcode/55.jump-game/cpp/">C++</a></td></tr>
    <tr><td>59</td><td>Spiral Matrix II</td><td>Medium</td><td>Array</td><td><a href="leetcode/59.spiral-matrix-ii/go/">Go</a> · <a href="leetcode/59.spiral-matrix-ii/ts/">TS</a> · <a href="leetcode/59.spiral-matrix-ii/cpp/">C++</a></td></tr>
    <tr><td>77</td><td>Combinations</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/77.combinations/go/">Go</a> · <a href="leetcode/77.combinations/ts/">TS</a> · <a href="leetcode/77.combinations/cpp/">C++</a></td></tr>
    <tr><td>78</td><td>Subsets</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/78.subsets/go/">Go</a> · <a href="leetcode/78.subsets/ts/">TS</a> · <a href="leetcode/78.subsets/cpp/">C++</a></td></tr>
    <tr><td>90</td><td>Subsets II</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/90.subsetswithdup/go/">Go</a> · <a href="leetcode/90.subsetswithdup/ts/">TS</a> · <a href="leetcode/90.subsetswithdup/cpp/">C++</a></td></tr>
    <tr><td>93</td><td>Restore IP Addresses</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/93.restore-ip-addresses/go/">Go</a> · <a href="leetcode/93.restore-ip-addresses/ts/">TS</a> · <a href="leetcode/93.restore-ip-addresses/cpp/">C++</a></td></tr>
    <tr><td>94</td><td>Binary Tree Inorder Traversal</td><td>Easy</td><td>Tree</td><td><a href="leetcode/94.binary-tree-inorder-traversal/go/">Go</a> · <a href="leetcode/94.binary-tree-inorder-traversal/ts/">TS</a> · <a href="leetcode/94.binary-tree-inorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>98</td><td>Validate Binary Search Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/98.validate-binary-search-tree/go/">Go</a> · <a href="leetcode/98.validate-binary-search-tree/ts/">TS</a> · <a href="leetcode/98.validate-binary-search-tree/cpp/">C++</a></td></tr>
    <tr><td>100</td><td>Same Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/100.same-tree/go/">Go</a> · <a href="leetcode/100.same-tree/ts/">TS</a> · <a href="leetcode/100.same-tree/cpp/">C++</a></td></tr>
    <tr><td>101</td><td>Symmetric Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/101.symmetric-tree/go/">Go</a> · <a href="leetcode/101.symmetric-tree/ts/">TS</a> · <a href="leetcode/101.symmetric-tree/cpp/">C++</a></td></tr>
    <tr><td>102</td><td>Binary Tree Level Order Traversal</td><td>Medium</td><td>Tree</td><td><a href="leetcode/102.binary-tree-level-order-traversal/go/">Go</a> · <a href="leetcode/102.binary-tree-level-order-traversal/ts/">TS</a> · <a href="leetcode/102.binary-tree-level-order-traversal/cpp/">C++</a></td></tr>
    <tr><td>104</td><td>Maximum Depth of Binary Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/104.maximum-depth-of-binary-tree/go/">Go</a> · <a href="leetcode/104.maximum-depth-of-binary-tree/ts/">TS</a> · <a href="leetcode/104.maximum-depth-of-binary-tree/cpp/">C++</a></td></tr>
    <tr><td>105</td><td>Construct Binary Tree from Preorder and Inorder Traversal</td><td>Medium</td><td>Tree</td><td><a href="leetcode/105.construct-binary-tree-from-Inorder-and-preorder-traversal/go/">Go</a> · <a href="leetcode/105.construct-binary-tree-from-Inorder-and-preorder-traversal/ts/">TS</a> · <a href="leetcode/105.construct-binary-tree-from-Inorder-and-preorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>106</td><td>Construct Binary Tree from Inorder and Postorder Traversal</td><td>Medium</td><td>Tree</td><td><a href="leetcode/106.construct-binary-tree-from-Inorder-and-postorder-traversal/go/">Go</a> · <a href="leetcode/106.construct-binary-tree-from-Inorder-and-postorder-traversal/ts/">TS</a> · <a href="leetcode/106.construct-binary-tree-from-Inorder-and-postorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>107</td><td>Binary Tree Level Order Traversal II</td><td>Medium</td><td>Tree</td><td><a href="leetcode/107.binary-tree-level-order-traversal-ii/go/">Go</a> · <a href="leetcode/107.binary-tree-level-order-traversal-ii/ts/">TS</a> · <a href="leetcode/107.binary-tree-level-order-traversal-ii/cpp/">C++</a></td></tr>
    <tr><td>108</td><td>Convert Sorted Array to Binary Search Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/108.convert-sorted-array-to-bst/go/">Go</a> · <a href="leetcode/108.convert-sorted-array-to-bst/ts/">TS</a> · <a href="leetcode/108.convert-sorted-array-to-bst/cpp/">C++</a></td></tr>
    <tr><td>111</td><td>Minimum Depth of Binary Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/111.minimum-depth-of-binary-tree/go/">Go</a> · <a href="leetcode/111.minimum-depth-of-binary-tree/ts/">TS</a> · <a href="leetcode/111.minimum-depth-of-binary-tree/cpp/">C++</a></td></tr>
    <tr><td>112</td><td>Path Sum</td><td>Easy</td><td>Tree</td><td><a href="leetcode/112.path-sum/go/">Go</a> · <a href="leetcode/112.path-sum/ts/">TS</a> · <a href="leetcode/112.path-sum/cpp/">C++</a></td></tr>
    <tr><td>113</td><td>Path Sum II</td><td>Medium</td><td>Tree</td><td><a href="leetcode/113.path-sum-ii/go/">Go</a> · <a href="leetcode/113.path-sum-ii/ts/">TS</a> · <a href="leetcode/113.path-sum-ii/cpp/">C++</a></td></tr>
    <tr><td>116</td><td>Populating Next Right Pointers in Each Node</td><td>Medium</td><td>Tree</td><td><a href="leetcode/116.populating-next-right-pointers-in-each-node/go/">Go</a> · <a href="leetcode/116.populating-next-right-pointers-in-each-node/ts/">TS</a> · <a href="leetcode/116.populating-next-right-pointers-in-each-node/cpp/">C++</a></td></tr>
    <tr><td>117</td><td>Populating Next Right Pointers in Each Node II</td><td>Medium</td><td>Tree</td><td><a href="leetcode/116.populating-next-right-pointers-in-each-node/">see 116</a></td></tr>
    <tr><td>122</td><td>Best Time to Buy and Sell Stock II</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/122.best-time-to-buy-and-sell-stock-ii/go/">Go</a> · <a href="leetcode/122.best-time-to-buy-and-sell-stock-ii/ts/">TS</a> · <a href="leetcode/122.best-time-to-buy-and-sell-stock-ii/cpp/">C++</a></td></tr>
    <tr><td>131</td><td>Palindrome Partitioning</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/131.palindrome-partitioning/go/">Go</a> · <a href="leetcode/131.palindrome-partitioning/ts/">TS</a> · <a href="leetcode/131.palindrome-partitioning/cpp/">C++</a></td></tr>
    <tr><td>134</td><td>Gas Station</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/134.gas-station/go/">Go</a> · <a href="leetcode/134.gas-station/ts/">TS</a> · <a href="leetcode/134.gas-station/cpp/">C++</a></td></tr>
    <tr><td>135</td><td>Candy</td><td>Hard</td><td>Greedy</td><td><a href="leetcode/135.candy/go/">Go</a> · <a href="leetcode/135.candy/ts/">TS</a> · <a href="leetcode/135.candy/cpp/">C++</a></td></tr>
    <tr><td>142</td><td>Linked List Cycle II</td><td>Medium</td><td>Double Points</td><td><a href="leetcode/142.linked-list-cycle-ii/go/">Go</a> · <a href="leetcode/142.linked-list-cycle-ii/ts/">TS</a> · <a href="leetcode/142.linked-list-cycle-ii/cpp/">C++</a></td></tr>
    <tr><td>144</td><td>Binary Tree Preorder Traversal</td><td>Easy</td><td>Tree</td><td><a href="leetcode/144.binary-tree-preorder-traversal/go/">Go</a> · <a href="leetcode/144.binary-tree-preorder-traversal/ts/">TS</a> · <a href="leetcode/144.binary-tree-preorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>145</td><td>Binary Tree Postorder Traversal</td><td>Easy</td><td>Tree</td><td><a href="leetcode/145.binary-tree-postorder-traversal/go/">Go</a> · <a href="leetcode/145.binary-tree-postorder-traversal/ts/">TS</a> · <a href="leetcode/145.binary-tree-postorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>150</td><td>Evaluate Reverse Polish Notation</td><td>Medium</td><td>Stack and Queue</td><td><a href="leetcode/150.evaluate-reverse-polish-notation/go/">Go</a> · <a href="leetcode/150.evaluate-reverse-polish-notation/ts/">TS</a> · <a href="leetcode/150.evaluate-reverse-polish-notation/cpp/">C++</a></td></tr>
    <tr><td>151</td><td>Reverse Words in a String</td><td>Medium</td><td>Double Points</td><td><a href="leetcode/151.reverse-words-in-a-string/go/">Go</a> · <a href="leetcode/151.reverse-words-in-a-string/ts/">TS</a> · <a href="leetcode/151.reverse-words-in-a-string/cpp/">C++</a></td></tr>
    <tr><td>160</td><td>Intersection of Two Linked Lists</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/160.intersection-of-two-linked-lists/go/">Go</a> · <a href="leetcode/160.intersection-of-two-linked-lists/ts/">TS</a> · <a href="leetcode/160.intersection-of-two-linked-lists/cpp/">C++</a></td></tr>
    <tr><td>199</td><td>Binary Tree Right Side View</td><td>Medium</td><td>Tree</td><td><a href="leetcode/199.binary-tree-right-side-view/go/">Go</a> · <a href="leetcode/199.binary-tree-right-side-view/ts/">TS</a> · <a href="leetcode/199.binary-tree-right-side-view/cpp/">C++</a></td></tr>
    <tr><td>202</td><td>Happy Number</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/202.happy-number/go/">Go</a> · <a href="leetcode/202.happy-number/ts/">TS</a> · <a href="leetcode/202.happy-number/cpp/">C++</a></td></tr>
    <tr><td>203</td><td>Remove Linked List Elements</td><td>Easy</td><td>Linked List</td><td><a href="leetcode/203.remove-linked-list-elements/go/">Go</a> · <a href="leetcode/203.remove-linked-list-elements/ts/">TS</a> · <a href="leetcode/203.remove-linked-list-elements/cpp/">C++</a></td></tr>
    <tr><td>206</td><td>Reverse Linked List</td><td>Easy</td><td>Linked List</td><td><a href="leetcode/206.reverse-linked-list/go/">Go</a> · <a href="leetcode/206.reverse-linked-list/ts/">TS</a> · <a href="leetcode/206.reverse-linked-list/cpp/">C++</a></td></tr>
    <tr><td>209</td><td>Minimum Size Subarray Sum</td><td>Medium</td><td>Double Points</td><td><a href="leetcode/209.min-sub-array-len/go/">Go</a> · <a href="leetcode/209.min-sub-array-len/ts/">TS</a> · <a href="leetcode/209.min-sub-array-len/cpp/">C++</a></td></tr>
    <tr><td>216</td><td>Combination Sum III</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/216.combination-sum-iii/go/">Go</a> · <a href="leetcode/216.combination-sum-iii/ts/">TS</a> · <a href="leetcode/216.combination-sum-iii/cpp/">C++</a></td></tr>
    <tr><td>222</td><td>Count Complete Tree Nodes</td><td>Medium</td><td>Tree</td><td><a href="leetcode/222.count-complete-tree-nodes/go/">Go</a> · <a href="leetcode/222.count-complete-tree-nodes/ts/">TS</a> · <a href="leetcode/222.count-complete-tree-nodes/cpp/">C++</a></td></tr>
    <tr><td>225</td><td>Implement Stack using Queues</td><td>Easy</td><td>Stack and Queue</td><td>Go · TS · <a href="leetcode/225.implement-stack-using-queues/cpp/">C++</a></td></tr>
    <tr><td>226</td><td>Invert Binary Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/226.invert-binary-tree/go/">Go</a> · <a href="leetcode/226.invert-binary-tree/ts/">TS</a> · <a href="leetcode/226.invert-binary-tree/cpp/">C++</a></td></tr>
    <tr><td>232</td><td>Implement Queue using Stacks</td><td>Easy</td><td>Stack and Queue</td><td><a href="leetcode/232.implement-queue-using-stacks/go/">Go</a> · <a href="leetcode/232.implement-queue-using-stacks/ts/">TS</a> · <a href="leetcode/232.implement-queue-using-stacks/cpp/">C++</a></td></tr>
    <tr><td>235</td><td>Lowest Common Ancestor of a Binary Search Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/236.lowest-common-ancestor-of-a-binary-tree/">see 236</a></td></tr>
    <tr><td>236</td><td>Lowest Common Ancestor of a Binary Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/236.lowest-common-ancestor-of-a-binary-tree/go/">Go</a> · <a href="leetcode/236.lowest-common-ancestor-of-a-binary-tree/ts/">TS</a> · <a href="leetcode/236.lowest-common-ancestor-of-a-binary-tree/cpp/">C++</a></td></tr>
    <tr><td>239</td><td>Sliding Window Maximum</td><td>Hard</td><td>Stack and Queue</td><td><a href="leetcode/239.sliding-window-maximum/go/">Go</a> · <a href="leetcode/239.sliding-window-maximum/ts/">TS</a> · <a href="leetcode/239.sliding-window-maximum/cpp/">C++</a></td></tr>
    <tr><td>242</td><td>Valid Anagram</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/242.valid-anagram/go/">Go</a> · <a href="leetcode/242.valid-anagram/ts/">TS</a> · <a href="leetcode/242.valid-anagram/cpp/">C++</a></td></tr>
    <tr><td>257</td><td>Binary Tree Paths</td><td>Easy</td><td>Tree</td><td><a href="leetcode/257.binary-tree-paths/go/">Go</a> · <a href="leetcode/257.binary-tree-paths/ts/">TS</a> · <a href="leetcode/257.binary-tree-paths/cpp/">C++</a></td></tr>
    <tr><td>332</td><td>Reconstruct Itinerary</td><td>Hard</td><td>Backtracking</td><td>Go · TS · <a href="leetcode/332.reconstruct-itinerary/cpp/">C++</a></td></tr>
    <tr><td>344</td><td>Reverse String</td><td>Easy</td><td>Double Points</td><td><a href="leetcode/344.reverse-string/go/">Go</a> · <a href="leetcode/344.reverse-string/ts/">TS</a> · <a href="leetcode/344.reverse-string/cpp/">C++</a></td></tr>
    <tr><td>347</td><td>Top K Frequent Elements</td><td>Medium</td><td>Hash Table</td><td><a href="leetcode/347.top-k-frequent-elements/go/">Go</a> · <a href="leetcode/347.top-k-frequent-elements/ts/">TS</a> · <a href="leetcode/347.top-k-frequent-elements/cpp/">C++</a></td></tr>
    <tr><td>349</td><td>Intersection of Two Arrays</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/349.intersection-of-two-arrays/go/">Go</a> · <a href="leetcode/349.intersection-of-two-arrays/ts/">TS</a> · <a href="leetcode/349.intersection-of-two-arrays/cpp/">C++</a></td></tr>
    <tr><td>376</td><td>Wiggle Subsequence</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/376.wiggle-subsequence/go/">Go</a> · <a href="leetcode/376.wiggle-subsequence/ts/">TS</a> · <a href="leetcode/376.wiggle-subsequence/cpp/">C++</a></td></tr>
    <tr><td>383</td><td>Ransom Note</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/383.ransom-note/go/">Go</a> · <a href="leetcode/383.ransom-note/ts/">TS</a> · <a href="leetcode/383.ransom-note/cpp/">C++</a></td></tr>
    <tr><td>404</td><td>Sum of Left Leaves</td><td>Easy</td><td>Tree</td><td><a href="leetcode/404.sum-of-left-leaves/go/">Go</a> · <a href="leetcode/404.sum-of-left-leaves/ts/">TS</a> · <a href="leetcode/404.sum-of-left-leaves/cpp/">C++</a></td></tr>
    <tr><td>406</td><td>Queue Reconstruction by Height</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/406.queue-reconstruction-by-height/go/">Go</a> · <a href="leetcode/406.queue-reconstruction-by-height/ts/">TS</a> · <a href="leetcode/406.queue-reconstruction-by-height/cpp/">C++</a></td></tr>
    <tr><td>429</td><td>N-ary Tree Level Order Traversal</td><td>Medium</td><td>Tree</td><td><a href="leetcode/429.n-ary-tree-level-order-traversal/go/">Go</a> · <a href="leetcode/429.n-ary-tree-level-order-traversal/ts/">TS</a> · <a href="leetcode/429.n-ary-tree-level-order-traversal/cpp/">C++</a></td></tr>
    <tr><td>450</td><td>Delete Node in a BST</td><td>Medium</td><td>Tree</td><td><a href="leetcode/450.delete-node-in-bst/go/">Go</a> · <a href="leetcode/450.delete-node-in-bst/ts/">TS</a> · <a href="leetcode/450.delete-node-in-bst/cpp/">C++</a></td></tr>
    <tr><td>452</td><td>Minimum Number of Arrows to Burst Balloons</td><td>Medium</td><td>Greedy</td><td><a href="leetcode/452.minimum-number-of-arrows-to-burst-balloons/go/">Go</a> · <a href="leetcode/452.minimum-number-of-arrows-to-burst-balloons/ts/">TS</a> · <a href="leetcode/452.minimum-number-of-arrows-to-burst-balloons/cpp/">C++</a></td></tr>
    <tr><td>454</td><td>4Sum II</td><td>Medium</td><td>Hash Table</td><td><a href="leetcode/454.4-sum-ii/go/">Go</a> · <a href="leetcode/454.4-sum-ii/ts/">TS</a> · <a href="leetcode/454.4-sum-ii/cpp/">C++</a></td></tr>
    <tr><td>455</td><td>Assign Cookies</td><td>Easy</td><td>Greedy</td><td><a href="leetcode/455.assign-cookies/go/">Go</a> · <a href="leetcode/455.assign-cookies/ts/">TS</a> · <a href="leetcode/455.assign-cookies/cpp/">C++</a></td></tr>
    <tr><td>459</td><td>Repeated Substring Pattern</td><td>Easy</td><td>String</td><td><a href="leetcode/459.repeated-substring-pattern/go/">Go</a> · <a href="leetcode/459.repeated-substring-pattern/ts/">TS</a> · <a href="leetcode/459.repeated-substring-pattern/cpp/">C++</a></td></tr>
    <tr><td>491</td><td>Non-decreasing Subsequences</td><td>Medium</td><td>Backtracking</td><td><a href="leetcode/491.non-decreasing-subsequences/go/">Go</a> · <a href="leetcode/491.non-decreasing-subsequences/ts/">TS</a> · <a href="leetcode/491.non-decreasing-subsequences/cpp/">C++</a></td></tr>
    <tr><td>501</td><td>Find Mode in Binary Search Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/501.find-mode-in-binary-search-tree/go/">Go</a> · <a href="leetcode/501.find-mode-in-binary-search-tree/ts/">TS</a> · <a href="leetcode/501.find-mode-in-binary-search-tree/cpp/">C++</a></td></tr>
    <tr><td>513</td><td>Find Bottom Left Tree Value</td><td>Medium</td><td>Tree</td><td><a href="leetcode/513.find-bottom-left-tree-value/go/">Go</a> · <a href="leetcode/513.find-bottom-left-tree-value/ts/">TS</a> · <a href="leetcode/513.find-bottom-left-tree-value/cpp/">C++</a></td></tr>
    <tr><td>515</td><td>Find Largest Value in Each Tree Row</td><td>Medium</td><td>Tree</td><td><a href="leetcode/515.find-largest-value-in-each-tree-row/go/">Go</a> · <a href="leetcode/515.find-largest-value-in-each-tree-row/ts/">TS</a> · <a href="leetcode/515.find-largest-value-in-each-tree-row/cpp/">C++</a></td></tr>
    <tr><td>530</td><td>Minimum Absolute Difference in BST</td><td>Easy</td><td>Tree</td><td><a href="leetcode/530.minimum-absolute-difference-in-bst/go/">Go</a> · <a href="leetcode/530.minimum-absolute-difference-in-bst/ts/">TS</a> · <a href="leetcode/530.minimum-absolute-difference-in-bst/cpp/">C++</a></td></tr>
    <tr><td>538</td><td>Convert BST to Greater Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/538.convert-bst-to-greater-tree/go/">Go</a> · <a href="leetcode/538.convert-bst-to-greater-tree/ts/">TS</a> · <a href="leetcode/538.convert-bst-to-greater-tree/cpp/">C++</a></td></tr>
    <tr><td>541</td><td>Reverse String II</td><td>Easy</td><td>Double Points</td><td><a href="leetcode/541.reverse-string-ii/go/">Go</a> · <a href="leetcode/541.reverse-string-ii/ts/">TS</a> · <a href="leetcode/541.reverse-string-ii/cpp/">C++</a></td></tr>
    <tr><td>559</td><td>Maximum Depth of N-ary Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/559.maximum-depth-of-n-ary-tree/go/">Go</a> · <a href="leetcode/559.maximum-depth-of-n-ary-tree/ts/">TS</a> · <a href="leetcode/559.maximum-depth-of-n-ary-tree/cpp/">C++</a></td></tr>
    <tr><td>572</td><td>Subtree of Another Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/572.subtree-of-another-tree/go/">Go</a> · <a href="leetcode/572.subtree-of-another-tree/ts/">TS</a> · <a href="leetcode/572.subtree-of-another-tree/cpp/">C++</a></td></tr>
    <tr><td>589</td><td>N-ary Tree Preorder Traversal</td><td>Easy</td><td>Tree</td><td><a href="leetcode/589.n-ary-tree-preorder-traversal/go/">Go</a> · <a href="leetcode/589.n-ary-tree-preorder-traversal/ts/">TS</a> · <a href="leetcode/589.n-ary-tree-preorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>590</td><td>N-ary Tree Postorder Traversal</td><td>Easy</td><td>Tree</td><td><a href="leetcode/590.n-ary-tree-postorder-traversal/go/">Go</a> · <a href="leetcode/590.n-ary-tree-postorder-traversal/ts/">TS</a> · <a href="leetcode/590.n-ary-tree-postorder-traversal/cpp/">C++</a></td></tr>
    <tr><td>617</td><td>Merge Two Binary Trees</td><td>Easy</td><td>Tree</td><td><a href="leetcode/617.merge-two-binary-trees/go/">Go</a> · <a href="leetcode/617.merge-two-binary-trees/ts/">TS</a> · <a href="leetcode/617.merge-two-binary-trees/cpp/">C++</a></td></tr>
    <tr><td>637</td><td>Average of Levels in Binary Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/637.average-of-levels-in-binary-tree/go/">Go</a> · <a href="leetcode/637.average-of-levels-in-binary-tree/ts/">TS</a> · <a href="leetcode/637.average-of-levels-in-binary-tree/cpp/">C++</a></td></tr>
    <tr><td>654</td><td>Maximum Binary Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/654.maximum-binary-tree/go/">Go</a> · <a href="leetcode/654.maximum-binary-tree/ts/">TS</a> · <a href="leetcode/654.maximum-binary-tree/cpp/">C++</a></td></tr>
    <tr><td>669</td><td>Trim a Binary Search Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/669.trim-bst/go/">Go</a> · <a href="leetcode/669.trim-bst/ts/">TS</a> · <a href="leetcode/669.trim-bst/cpp/">C++</a></td></tr>
    <tr><td>700</td><td>Search in a Binary Search Tree</td><td>Easy</td><td>Tree</td><td><a href="leetcode/700.search-in-a-binary-search-tree/go/">Go</a> · <a href="leetcode/700.search-in-a-binary-search-tree/ts/">TS</a> · <a href="leetcode/700.search-in-a-binary-search-tree/cpp/">C++</a></td></tr>
    <tr><td>701</td><td>Insert into a Binary Search Tree</td><td>Medium</td><td>Tree</td><td><a href="leetcode/701.insert-into-bst/go/">Go</a> · <a href="leetcode/701.insert-into-bst/ts/">TS</a> · <a href="leetcode/701.insert-into-bst/cpp/">C++</a></td></tr>
    <tr><td>704</td><td>Binary Search</td><td>Easy</td><td>Array</td><td><a href="leetcode/704.binary-search/go/">Go</a> · <a href="leetcode/704.binary-search/ts/">TS</a> · <a href="leetcode/704.binary-search/cpp/">C++</a></td></tr>
    <tr><td>707</td><td>Design Linked List</td><td>Medium</td><td>Linked List</td><td><a href="leetcode/707.design-linked-list/go/">Go</a> · <a href="leetcode/707.design-linked-list/ts/">TS</a> · <a href="leetcode/707.design-linked-list/cpp/">C++</a></td></tr>
    <tr><td>860</td><td>Lemonade Change</td><td>Easy</td><td>Greedy</td><td><a href="leetcode/860.lemonade-change/go/">Go</a> · <a href="leetcode/860.lemonade-change/ts/">TS</a> · <a href="leetcode/860.lemonade-change/cpp/">C++</a></td></tr>
    <tr><td>977</td><td>Squares of a Sorted Array</td><td>Easy</td><td>Double Points</td><td><a href="leetcode/977.squares-of-a-sorted-array/go/">Go</a> · <a href="leetcode/977.squares-of-a-sorted-array/ts/">TS</a> · <a href="leetcode/977.squares-of-a-sorted-array/cpp/">C++</a></td></tr>
    <tr><td>1002</td><td>Find Common Characters</td><td>Easy</td><td>Hash Table</td><td><a href="leetcode/1002.find-common-characters/go/">Go</a> · <a href="leetcode/1002.find-common-characters/ts/">TS</a> · <a href="leetcode/1002.find-common-characters/cpp/">C++</a></td></tr>
    <tr><td>1005</td><td>Maximize Sum Of Array After K Negations</td><td>Easy</td><td>Greedy</td><td><a href="leetcode/1005.maximize-sum-of-array-after-k-negations/go/">Go</a> · <a href="leetcode/1005.maximize-sum-of-array-after-k-negations/ts/">TS</a> · <a href="leetcode/1005.maximize-sum-of-array-after-k-negations/cpp/">C++</a></td></tr>
    <tr><td>1047</td><td>Remove All Adjacent Duplicates In String</td><td>Easy</td><td>Stack and Queue</td><td><a href="leetcode/1047.remove-all-adjacent-duplicates-in-string/go/">Go</a> · <a href="leetcode/1047.remove-all-adjacent-duplicates-in-string/ts/">TS</a> · <a href="leetcode/1047.remove-all-adjacent-duplicates-in-string/cpp/">C++</a></td></tr>
  </tbody>
</table>

## Conventions

- C++ test files should end with `_test.cpp`.
- Go test files should end with `_test.go`.
- TypeScript test files should end with `.test.ts`.
- Build output goes into `build/` and is ignored by Git.
- Dependencies such as `node_modules/` and `.pnpm-store/` are ignored.

## Install

### C++

Required:

- CMake
- A C++20 compiler

On macOS, Apple Clang from Xcode Command Line Tools is enough:

```bash
xcode-select --install
```

Build all C++ tests:

```bash
./build.sh
```

Run all C++ tests:

```bash
ctest --test-dir build --output-on-failure
```

Optional VS Code per-test buttons:

- Install `C++ TestMate`
- Extension id: `matepek.vscode-catch2-test-adapter`
- Run `./build.sh`
- Open the VS Code Testing panel

### Go

Required:

- Go

Run all Go tests:

```bash
go test ./...
```

Optional VS Code per-test buttons:

- Install the Go extension
- Extension id: `golang.Go`
- Open a Go test file and use the run/debug links above specific tests

### TypeScript

Required:

- Node.js
- pnpm

Install dependencies:

```bash
pnpm install
```

Run TypeScript tests:

```bash
pnpm test
```

Optional VS Code per-test buttons:

- Install the Vitest extension
- Extension id: `vitest.explorer`
- Open the VS Code Testing panel or use the run/debug links for specific tests
