// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourceresponse.h"
#include "deleteresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::DeleteResourceResponse
 * \brief The DeleteResourceResponse class provides an interace for CloudControl DeleteResource responses.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::deleteResource
 */

/*!
 * Constructs a DeleteResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceResponse::DeleteResourceResponse(
        const DeleteResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudControlResponse(new DeleteResourceResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceRequest * DeleteResourceResponse::request() const
{
    Q_D(const DeleteResourceResponse);
    return static_cast<const DeleteResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudControl DeleteResource \a response.
 */
void DeleteResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudControl::DeleteResourceResponsePrivate
 * \brief The DeleteResourceResponsePrivate class provides private implementation for DeleteResourceResponse.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a DeleteResourceResponsePrivate object with public implementation \a q.
 */
DeleteResourceResponsePrivate::DeleteResourceResponsePrivate(
    DeleteResourceResponse * const q) : CloudControlResponsePrivate(q)
{

}

/*!
 * Parses a CloudControl DeleteResource response element from \a xml.
 */
void DeleteResourceResponsePrivate::parseDeleteResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudControl
} // namespace QtAws
