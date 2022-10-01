// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EBSRESPONSE_H
#define QTAWS_EBSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsebsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ebs {

class EbsResponsePrivate;

class QTAWSEBS_EXPORT EbsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EbsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EbsResponse(EbsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EbsResponse)
    Q_DISABLE_COPY(EbsResponse)

};

} // namespace Ebs
} // namespace QtAws

#endif
