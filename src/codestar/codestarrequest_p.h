/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CODESTARREQUEST_P_H
#define QTAWS_CODESTARREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class CodeStarRequest;

class QTAWS_EXPORT CodeStarRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeStarRequest::Action action; ///< CodeStar action to be performed.
    QString apiVersion;        ///< CodeStar API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeStar request (query string) parameters. @todo?

    CodeStarRequestPrivate(const CodeStarRequest::Action action, CodeStarRequest * const q);
    CodeStarRequestPrivate(const CodeStarRequestPrivate &other, CodeStarRequest * const q);

    static QString toString(const CodeStarRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeStarRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
