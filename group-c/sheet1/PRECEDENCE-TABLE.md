<table>
    <thead>
        <tr>
            <th>Precedence</th>
            <th>Operators</th>
            <th>Associativity</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>1</td>
            <td><code>++</code>, <code>--</code> (postfix)</td>
            <td>Right-to-left</td>
        </tr>
        <tr>
            <td></td>
            <td><code>+</code>, <code>-</code> (unary)</td>
            <td>Right-to-left</td>
        </tr>
        <tr>
            <td></td>
            <td><code>!</code>, <code>~</code></td>
            <td>Right-to-left</td>
        </tr>
        <tr>
            <td></td>
            <td><code>*</code> (dereference), <code>&amp; </code> (address-of)</td>
            <td>Right-to-left</td>
        </tr>
        <tr>
            <td>2</td>
            <td><code>*</code>, <code>/</code>, <code>%</code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>3</td>
            <td><code>+</code>, <code>-</code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>4</td>
            <td><code>&lt; &lt; </code>, <code>&gt; &gt; </code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>5</td>
            <td><code>&lt; </code>, <code>&gt; </code>, <code>&lt; =</code>, <code>&gt; =</code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>6</td>
            <td><code>==</code>, <code>!=</code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>7</td>
            <td><code>&amp; </code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>8</td>
            <td><code>^</code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>9</td>
            <td> `</td>
            <td>` </td>
        </tr>
        <tr>
            <td>10</td>
            <td><code>&amp; &amp; </code></td>
            <td>Left-to-right</td>
        </tr>
        <tr>
            <td>11</td>
            <td>`</td>
            <td></td>
        </tr>
        <tr>
            <td>12</td>
            <td><code>? :</code></td>
            <td>Right-to-left</td>
        </tr>
        <tr>
            <td>13</td>
            <td><code>=</code>, <code>+=</code>, <code>-=</code> and so on</td>
            <td>Right-to-left</td>
        </tr>
        <tr>
            <td>14</td>
            <td><code>, </code></td>
            <td>Left-to-right</td>
        </tr>
    </tbody>
</table>