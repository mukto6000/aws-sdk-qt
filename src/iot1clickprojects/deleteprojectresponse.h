// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTRESPONSE_H
#define QTAWS_DELETEPROJECTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "deleteprojectrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DeleteProjectResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DeleteProjectResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    DeleteProjectResponse(const DeleteProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectResponse)
    Q_DISABLE_COPY(DeleteProjectResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
