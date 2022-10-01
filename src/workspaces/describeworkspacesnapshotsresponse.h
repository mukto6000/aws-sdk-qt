// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBEWORKSPACESNAPSHOTSRESPONSE_H

#include "workspacesresponse.h"
#include "describeworkspacesnapshotsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceSnapshotsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeWorkspaceSnapshotsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeWorkspaceSnapshotsResponse(const DescribeWorkspaceSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkspaceSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkspaceSnapshotsResponse)
    Q_DISABLE_COPY(DescribeWorkspaceSnapshotsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
