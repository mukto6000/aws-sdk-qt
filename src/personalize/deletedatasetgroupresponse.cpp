// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetgroupresponse.h"
#include "deletedatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteDatasetGroupResponse
 * \brief The DeleteDatasetGroupResponse class provides an interace for Personalize DeleteDatasetGroup responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteDatasetGroup
 */

/*!
 * Constructs a DeleteDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetGroupResponse::DeleteDatasetGroupResponse(
        const DeleteDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetGroupRequest * DeleteDatasetGroupResponse::request() const
{
    Q_D(const DeleteDatasetGroupResponse);
    return static_cast<const DeleteDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteDatasetGroup \a response.
 */
void DeleteDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteDatasetGroupResponsePrivate
 * \brief The DeleteDatasetGroupResponsePrivate class provides private implementation for DeleteDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteDatasetGroupResponsePrivate object with public implementation \a q.
 */
DeleteDatasetGroupResponsePrivate::DeleteDatasetGroupResponsePrivate(
    DeleteDatasetGroupResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteDatasetGroup response element from \a xml.
 */
void DeleteDatasetGroupResponsePrivate::parseDeleteDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
