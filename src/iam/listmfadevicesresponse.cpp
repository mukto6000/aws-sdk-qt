// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmfadevicesresponse.h"
#include "listmfadevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListMFADevicesResponse
 * \brief The ListMFADevicesResponse class provides an interace for Iam ListMFADevices responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listMFADevices
 */

/*!
 * Constructs a ListMFADevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMFADevicesResponse::ListMFADevicesResponse(
        const ListMFADevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListMFADevicesResponsePrivate(this), parent)
{
    setRequest(new ListMFADevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMFADevicesRequest * ListMFADevicesResponse::request() const
{
    Q_D(const ListMFADevicesResponse);
    return static_cast<const ListMFADevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListMFADevices \a response.
 */
void ListMFADevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMFADevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListMFADevicesResponsePrivate
 * \brief The ListMFADevicesResponsePrivate class provides private implementation for ListMFADevicesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListMFADevicesResponsePrivate object with public implementation \a q.
 */
ListMFADevicesResponsePrivate::ListMFADevicesResponsePrivate(
    ListMFADevicesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListMFADevices response element from \a xml.
 */
void ListMFADevicesResponsePrivate::parseListMFADevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMFADevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
