#include <iostream>

/**
 * @brief   开闭原则
 *          对扩展开放，对修改关闭，增加功能是通过增加代码实现，而不是通过修改源代码。
 */

/**
 * @brief   没有使用开闭原则的计算器类
 *          缺点：如果增加取模的运算，需要修改getResult成员方法，如果增加新的功能的情况下需要修改源码，那么就会有修改出错的可能性。我们应该在
 *          增加新功能的时候，不能影响其他已经完成的功能，这就是对修改关闭，对扩展开放，即开闭原则。
 */
class Calculator {
public:
    /**
     * @brief   构造函数
     * @param a 整数a
     * @param b 整数b
     * @param mOperator 运算符
     */
    Calculator(int a, int b, std::string mOperator) {
        this->m_a = a;
        this->m_b = b;
        this->m_operator = mOperator;
    };

    /**
     * @brief   获取计算结果
     * @return  计算结果
     */
    int getResult() {
        if (this->m_operator == "+") {
            return this->m_a + this->m_b;
        } else if (this->m_operator == "-") {
            return this->m_a - this->m_b;
        } else if (this->m_operator == "*") {
            return this->m_a * this->m_b;
        } else if (this->m_operator == "/") {
            return this->m_a / this->m_b;
        }
    }

private:
    int m_a;                    ///< 数a
    int m_b;                    ///< 数b
    std::string m_operator;     ///< 运算符
};

/**
 * @brief   计算器抽象类
 *          加减乘除计算器分别继承抽象类，各自的实现相互之间不会产生影响，当需要增加新的计算方式时，只需继续继承抽象类，创建一个子类计算器即可，
 *          无需修改已有代码，即遵守了开闭原则。
 */
class AbstractCalculator {
public:
    virtual ~AbstractCalculator() = 0;
    /**
     * @brief   获取计算结果
     * @return  计算结果
     */
    virtual  int getResult() = 0;

    /**
     * @brief   设置操作数
     * @param a 整数a
     * @param b 整数b
     */
    virtual void setOperator(int a, int b) = 0;
};

AbstractCalculator::~AbstractCalculator() = default;

/**
 * @brief   加法计算器类
 */
class AdditionCalculator : public AbstractCalculator {
public:
    void setOperator(int a, int b) override {
        this->m_a = a;
        this->m_b = b;
    }

    int getResult() override {
        return this->m_a + this->m_b;
    }

private:
    int m_a;                ///< 数a
    int m_b;                ///< 数b
};

/**
 * @brief   减法计算器类
 */
class SubtractionCalculator : public AbstractCalculator {
public:
    void setOperator(int a, int b) override {
        this->m_a = a;
        this->m_b = b;
    }

    int getResult() override {
        return this->m_a - this->m_b;
    }

private:
    int m_a;                ///< 数a
    int m_b;                ///< 数b
};

/**
 * @brief   乘法计算器类
 */
class MultiplicationCalculator : public AbstractCalculator {
public:
    void setOperator(int a, int b) override {
        this->m_a = a;
        this->m_b = b;
    }

    int getResult() override {
        return this->m_a * this->m_b;
    }

private:
    int m_a;                ///< 数a
    int m_b;                ///< 数b
};

/**
 * @brief   除法计算器类
 */
class DivisionCalculator : public AbstractCalculator {
public:
    void setOperator(int a, int b) override {
        this->m_a = a;
        this->m_b = b;
    }

    int getResult() override {
        return this->m_a / this->m_b;
    }

private:
    int m_a;                ///< 数a
    int m_b;                ///< 数b
};

/**
 * @brief   测试没有遵守开闭原则的计算器类
 */
void test01() {
    Calculator* calculator = new Calculator(10, 5, "+");
    std::cout << calculator->getResult() << std::endl;
}

/**
 * @brief   测试遵守开闭原则的计算器类
 */
void test02() {
    AbstractCalculator* calculator = new AdditionCalculator();
    calculator->setOperator(10, 20);
    std::cout << calculator->getResult() << std::endl;

    delete calculator;
    calculator = new SubtractionCalculator();
    calculator->setOperator(30, 20);
    std::cout << calculator->getResult() << std::endl;
}

/**
 * @brief   主函数
 * @return
 */
int main() {

    test01();
    test02();

    return 0;
}
