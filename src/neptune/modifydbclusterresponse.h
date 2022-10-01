// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERRESPONSE_H
#define QTAWS_MODIFYDBCLUSTERRESPONSE_H

#include "neptuneresponse.h"
#include "modifydbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBClusterResponsePrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBClusterResponse : public NeptuneResponse {
    Q_OBJECT

public:
    ModifyDBClusterResponse(const ModifyDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterResponse)
    Q_DISABLE_COPY(ModifyDBClusterResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
