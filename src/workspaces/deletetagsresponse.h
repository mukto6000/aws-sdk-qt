// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSRESPONSE_H
#define QTAWS_DELETETAGSRESPONSE_H

#include "workspacesresponse.h"
#include "deletetagsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteTagsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteTagsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteTagsResponse(const DeleteTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTagsResponse)
    Q_DISABLE_COPY(DeleteTagsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
