// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTERESPONSE_H
#define QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTERESPONSE_H

#include "docdbresponse.h"
#include "modifydbclustersnapshotattributerequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterSnapshotAttributeResponsePrivate;

class QTAWSDOCDB_EXPORT ModifyDBClusterSnapshotAttributeResponse : public DocDbResponse {
    Q_OBJECT

public:
    ModifyDBClusterSnapshotAttributeResponse(const ModifyDBClusterSnapshotAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBClusterSnapshotAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterSnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifyDBClusterSnapshotAttributeResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
