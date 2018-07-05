#pragma once
#include <vector>

class Utility
{
public:
    class LinearCurvePiece
    {
    public:
        LinearCurvePiece(const float& slope, const float& intercept);
        const float& getSlope() const;
        const float& getSlopeIntercept() const;
    private:
        float slope_, intercept_;
    };

    class PieceWiseLinearCurve
    {
    public:
        void addCurvePiece(const float& slope, const float& intercept);
        const std::vector<LinearCurvePiece>& getCurvePieces() const;
    private:
        std::vector<LinearCurvePiece> curvePieces_;
    };

    void setCurve(const PieceWiseLinearCurve& curve);
    const PieceWiseLinearCurve& getCurve() const;
private:
    PieceWiseLinearCurve curve_;
};