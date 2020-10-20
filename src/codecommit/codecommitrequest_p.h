/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CODECOMMITREQUEST_P_H
#define QTAWS_CODECOMMITREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CodeCommitRequest;

class QTAWS_EXPORT CodeCommitRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeCommitRequest::Action action; ///< CodeCommit action to be performed.
    QString apiVersion;        ///< CodeCommit API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeCommit request (query string) parameters. @todo?

    CodeCommitRequestPrivate(const CodeCommitRequest::Action action, CodeCommitRequest * const q);
    CodeCommitRequestPrivate(const CodeCommitRequestPrivate &other, CodeCommitRequest * const q);

    static QString toString(const CodeCommitRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
