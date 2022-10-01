// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBSESSIONRESPONSE_H
#define QTAWS_QLDBSESSIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsqldbsessionglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace QldbSession {

class QldbSessionResponsePrivate;

class QTAWSQLDBSESSION_EXPORT QldbSessionResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    QldbSessionResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    QldbSessionResponse(QldbSessionResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QldbSessionResponse)
    Q_DISABLE_COPY(QldbSessionResponse)

};

} // namespace QldbSession
} // namespace QtAws

#endif
