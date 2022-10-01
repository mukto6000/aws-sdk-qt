// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HONEYCODERESPONSE_H
#define QTAWS_HONEYCODERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawshoneycodeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Honeycode {

class HoneycodeResponsePrivate;

class QTAWSHONEYCODE_EXPORT HoneycodeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    HoneycodeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    HoneycodeResponse(HoneycodeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HoneycodeResponse)
    Q_DISABLE_COPY(HoneycodeResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
