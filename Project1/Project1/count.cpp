##include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// v_row_len�� 2���� �迭 v�� ��(����) �����Դϴ�.
// v_col_len�� 2���� �迭 v�� ��(����) �����Դϴ�.
// v[i][j]�� v�� i��° ���� j��° ���� ����� ���� �ǹ��մϴ�.
public int[] solution(int[][]) {
    int x;
    int y;

    if (v[0][0] = v[2][0]) {
        x = y[1][0];
    }
    else if (v[1][0] = v[2][0]) {
        x = y[0][0];
    }
    else { x = y[2][0] }

    if (v[1][0] = v[1][1]) {
        x = y[2][1];
    }
    else if (v[1][1] = v[2][1]) {
        x = y[0][1];
    }
    else { x = y[1][1] }
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (x, y);
    return answer;
}
}