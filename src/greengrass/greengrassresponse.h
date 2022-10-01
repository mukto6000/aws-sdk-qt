// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSRESPONSE_H
#define QTAWS_GREENGRASSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsgreengrassglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Greengrass {

class GreengrassResponsePrivate;

class QTAWSGREENGRASS_EXPORT GreengrassResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GreengrassResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GreengrassResponse(GreengrassResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GreengrassResponse)
    Q_DISABLE_COPY(GreengrassResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
