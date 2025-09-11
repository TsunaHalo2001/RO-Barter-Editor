//
// Created by tsuna on 9/9/25.
//

#ifndef RO_BARTER_EDITOR_NOUSE_H
#define RO_BARTER_EDITOR_NOUSE_H


class NoUse {
    protected:
        int override;
        bool sitting;

    public:
        NoUse(int, bool);
        NoUse();
        ~NoUse();

        int getOverride() const;
        bool getSitting() const;

        void setOverride(int);
        void setSitting(bool);
};


#endif //RO_BARTER_EDITOR_NOUSE_H