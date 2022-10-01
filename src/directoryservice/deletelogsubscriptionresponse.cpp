// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelogsubscriptionresponse.h"
#include "deletelogsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DeleteLogSubscriptionResponse
 * \brief The DeleteLogSubscriptionResponse class provides an interace for DirectoryService DeleteLogSubscription responses.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>Directory Service</fullname>
 * 
 *  Directory Service is a web service that makes it easy for you to setup and run directories in the Amazon Web Services
 *  cloud, or connect your Amazon Web Services resources with an existing self-managed Microsoft Active Directory. This
 *  guide provides detailed information about Directory Service operations, data types, parameters, and errors. For
 *  information about Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">Directory
 *  Service</a> and the <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
 *  Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  Directory Service and other Amazon Web Services services. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::deleteLogSubscription
 */

/*!
 * Constructs a DeleteLogSubscriptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLogSubscriptionResponse::DeleteLogSubscriptionResponse(
        const DeleteLogSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteLogSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteLogSubscriptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLogSubscriptionRequest * DeleteLogSubscriptionResponse::request() const
{
    Q_D(const DeleteLogSubscriptionResponse);
    return static_cast<const DeleteLogSubscriptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService DeleteLogSubscription \a response.
 */
void DeleteLogSubscriptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLogSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::DeleteLogSubscriptionResponsePrivate
 * \brief The DeleteLogSubscriptionResponsePrivate class provides private implementation for DeleteLogSubscriptionResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DeleteLogSubscriptionResponsePrivate object with public implementation \a q.
 */
DeleteLogSubscriptionResponsePrivate::DeleteLogSubscriptionResponsePrivate(
    DeleteLogSubscriptionResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService DeleteLogSubscription response element from \a xml.
 */
void DeleteLogSubscriptionResponsePrivate::parseDeleteLogSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLogSubscriptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws
