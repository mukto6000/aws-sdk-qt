// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putfilesystempolicyresponse.h"
#include "putfilesystempolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutFileSystemPolicyResponse
 * \brief The PutFileSystemPolicyResponse class provides an interace for Efs PutFileSystemPolicy responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::putFileSystemPolicy
 */

/*!
 * Constructs a PutFileSystemPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutFileSystemPolicyResponse::PutFileSystemPolicyResponse(
        const PutFileSystemPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new PutFileSystemPolicyResponsePrivate(this), parent)
{
    setRequest(new PutFileSystemPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutFileSystemPolicyRequest * PutFileSystemPolicyResponse::request() const
{
    Q_D(const PutFileSystemPolicyResponse);
    return static_cast<const PutFileSystemPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs PutFileSystemPolicy \a response.
 */
void PutFileSystemPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutFileSystemPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::PutFileSystemPolicyResponsePrivate
 * \brief The PutFileSystemPolicyResponsePrivate class provides private implementation for PutFileSystemPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutFileSystemPolicyResponsePrivate object with public implementation \a q.
 */
PutFileSystemPolicyResponsePrivate::PutFileSystemPolicyResponsePrivate(
    PutFileSystemPolicyResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs PutFileSystemPolicy response element from \a xml.
 */
void PutFileSystemPolicyResponsePrivate::parsePutFileSystemPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutFileSystemPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
